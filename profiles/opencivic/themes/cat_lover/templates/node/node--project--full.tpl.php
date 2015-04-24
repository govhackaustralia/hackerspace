<?php error_reporting(E_ALL & ~E_STRICT); ?>
<?php $field_image = field_view_field('node', $node, 'field_image'); print render($field_image); ?>

<?php if($node->body): ?>
  <?php print $node->body[LANGUAGE_NONE][0]['value']; ?>
<?php endif; ?>

<?php $field_team_name = field_view_field('node', $node, 'field_team_name'); print render($field_team_name); ?>
<?php print render(field_view_field('node', $node, 'field_contributor')); ?>
<?php print render(field_view_field('node', $node, 'field_team_contact_details')); ?>
<?php print render(field_view_field('node', $node, 'field_team_awards')); ?>
<?php print render(field_view_field('node', $node, 'field_procurement')); ?>
<?php print render(field_view_field('node', $node, 'field_code_for_australia')); ?>
<?php print render(field_view_field('node', $node, 'field_data_portal_use_case')); ?>
<?php print render(field_view_field('node', $node, 'field_showcase')); ?>

<?php print render(field_view_field('node', $node, 'field_project_jurisdiction')); ?>
<?php print render(field_view_field('node', $node, 'field_prizes')); ?>
<?php print render(field_view_field('node', $node, 'field_science_prize')); ?>
<?php print render(field_view_field('node', $node, 'field_digital_humanities_prize')); ?>
<?php print render(field_view_field('node', $node, 'field_social_inclusion_prize')); ?>
<?php print render(field_view_field('node', $node, 'field_business_prize')); ?>
<?php print render(field_view_field('node', $node, 'field_data_journalism_prize')); ?>
<?php print render(field_view_field('node', $node, 'field_act_prizes')); ?>
<?php print render(field_view_field('node', $node, 'field_adelaide_prizes')); ?>
<?php print render(field_view_field('node', $node, 'field_mount_gambier_prizes')); ?>
<?php print render(field_view_field('node', $node, 'field_gold_coast_prizes')); ?>
<?php print render(field_view_field('node', $node, 'field_nsw_sydney_prizes')); ?>
<?php print render(field_view_field('node', $node, 'field_tasmania_prizes')); ?>
<?php print render(field_view_field('node', $node, 'field_victorian_technology_innov')); ?>
<?php print render(field_view_field('node', $node, 'field_geelong_ballarat_prizes')); ?>
<?php print render(field_view_field('node', $node, 'field_melbourne_prizes')); ?>
<?php print render(field_view_field('node', $node, 'field_wa_perth_prizes')); ?>
<?php print render(field_view_field('node', $node, 'field_hack_hosting')); ?>

<?php print render(field_view_field('node', $node, 'field_datasets_used')); ?>
<?php print render(field_view_field('node', $node, 'field_local_datasets_used')); ?>
<?php print render(field_view_field('node', $node, 'field_other_datasets')); ?>

<?php print render(field_view_field('node', $node, 'field_download_url')); ?>
<?php print render(field_view_field('node', $node, 'field_url')); ?>

<?php print render(field_view_field('node', $node, 'field_project_rating')); ?>
<?php print render(field_view_field('node', $node, 'field_video_url')); ?>


<?php if(user_access("judge_voting")): ?>
  <p>&nbsp;</p>
  <p><?php print t('Judge zone') ?></p>
  <div class="field-label"><?php print t('Judge comment') ?></div>
  <textarea rows="5"></textarea>
  <input type="button" value="Comment">
  <?php print render(field_view_field('node', $node, 'field_judge_comment')); ?>
  <?php print render(field_view_field('node', $node, 'field_originality')); ?>
  <?php print render(field_view_field('node', $node, 'field_relevance')); ?>
  <?php print render(field_view_field('node', $node, 'field_consistency')); ?>
  <?php print render(field_view_field('node', $node, 'field_quality')); ?>
  <?php print render(field_view_field('node', $node, 'field_usability')); ?>
<?php endif; ?>