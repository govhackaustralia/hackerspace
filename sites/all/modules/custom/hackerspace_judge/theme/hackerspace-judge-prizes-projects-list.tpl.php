<!--    Listing Prizes category -->
<?php foreach ($data as $tid => $data_array): ?>

  <p class="heading-3"><?php print $data_array['name']; ?></p>

  <?php if(isset($data_array['nodes'])): ?>

    <!--      Listing nodes by rating-->
    <?php foreach ($data_array['nodes'] as $rating => $rated_nodes) : ?>

        <p><?php print t('Rating: !rating', array('!rating' => $rating)); ?></p>
        <?php print implode('', $rated_nodes); ?>
    <?php endforeach; ?>

  <?php else: ?>
      <p class="project-item">- <?php print t('No related projects'); ?> -</p>
  <?php endif; ?>

<?php endforeach; ?>