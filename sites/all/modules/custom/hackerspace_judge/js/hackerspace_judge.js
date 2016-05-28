(function($) {
    $(document).ready(function(){
        $('#judge_comment_button').click(function(){
            $('.custom_error').remove();
            var comment = $('#judge_comment_text').val()
            var nid = $('#judge_comment_text').attr('class')
            if(!comment){
                $('#judge_comment_button').after('<div class="custom_error"><p>Please enter comment.</p></div>')
                return false;
            }
            jQuery.ajax({
                type: 'POST',
                url: '/ajax/judge/comment',
                dataType: 'json',
                data: {'comment': comment, 'time' : jQuery.now(), 'nid': nid},
                beforeSend: function(data) {
                    $('#judge_comment_text').attr('readonly','readonly');
                    $('#judge_comment_button').attr('disabled', 'disabled');
                },
                success: function (data) {

                    if(data.result = 1){
                        alert('Comment saved.');
                        $('#judge_comment_text').remove();
                        $('#judge_comment_button').remove();
                    }
                    else{
                        $('#judge_comment_text').removeAttr('readonly');
                        $('#judge_comment_button').removeAttr('disabled');
                        $('#judge_comment_button').after('<div class="custom_error"><p>Error! please try again.</p></div>')
                    }

                }
            });
        })
    })
})(jQuery);