<?php
// $Id:$

function visitorinfo_views_data()  {
    // Basic table information.
    $data = array();
    $data['visitorinfo']['table']['group']  = t('Visitorinfo');
    $data['visitorinfo']['table']['base'] = array(
      'field' => 'csid',
      'title' => t('Visitor Info'),
      'help' => t('Stores site visitor information.'),
    );
    
    $data['visitorinfo']['csid'] = array(
      'title' => t('CSID'),
      'help' => t("Record ID"), 
        'field' => array(
          'handler' => 'views_handler_field_numeric',
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_numeric',
        ),
        'sort' => array(
          'handler' => 'views_handler_sort',
        ),
      );
      
    $data['visitorinfo']['ip'] = array(
      'title' => t('IP Address'),
      'help' => t("IP Address"), 
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
     'filter' => array(
       'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
       'handler' => 'views_handler_argument_string',
     ),
     'sort' => array(
       'handler' => 'views_handler_sort',
     ),
    );
    
    $data['visitorinfo']['ccode'] = array(
     'title' => t('Country Code'),
     'help' => t("Country Code"), 
     'field' => array(
       'handler' => 'views_handler_field',
       'click sortable' => TRUE,
     ),
     'filter' => array(
       'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
       'handler' => 'views_handler_argument_string',
     ),
     'sort' => array(
       'handler' => 'views_handler_sort',
     ),
    );
      
    $data['visitorinfo']['cname'] = array(
     'title' => t('Country Name'),
     'help' => t("Country Name"), 
     'field' => array(
       'handler' => 'views_handler_field',
       'click sortable' => TRUE,
     ),
    
     'filter' => array(
       'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
       'handler' => 'views_handler_argument_string',
     ),
     'sort' => array(
       'handler' => 'views_handler_sort',
     ),
    );
      
    $data['visitorinfo']['zip'] = array(
     'title' => t('Zip Code'),
     'help' => t("Zip Code"), 
     'field' => array(
       'handler' => 'views_handler_field',
       'click sortable' => TRUE,
     ),
     'filter' => array(
       'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
       'handler' => 'views_handler_argument_string',
     ),
     'sort' => array(
       'handler' => 'views_handler_sort',
     ),
    );
        
    $data['visitorinfo']['state'] = array(
     'title' => t('State'),
     'help' => t("The state"), 
       
     'field' => array(
       'handler' => 'views_handler_field',
       'click sortable' => TRUE,
     ),
    
     'filter' => array(
       'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
       'handler' => 'views_handler_argument_string',
     ),
     'sort' => array(
       'handler' => 'views_handler_sort',
     ),
    );
    
      
    $data['visitorinfo']['city'] = array(
     'title' => t('City'),
     'help' => t("The city"), 
     'field' => array(
       'handler' => 'views_handler_field',
       'click sortable' => TRUE,
     ),
     'filter' => array(
       'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
       'handler' => 'views_handler_argument_string',
     ),
     'sort' => array(
       'handler' => 'views_handler_sort',
     ),
    );
      
      
    $data['visitorinfo']['latitude'] = array(
     'title' => t('Latitude'),
     'help' => t("Latitude"), 
     'field' => array(
       'handler' => 'views_handler_field',
       'click sortable' => TRUE,
     ),
     'filter' => array(
       'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
       'handler' => 'views_handler_argument_string',
     ),
     'sort' => array(
       'handler' => 'views_handler_sort',
     ),
    );
    
    $data['visitorinfo']['longitude'] = array(
     'title' => t('Longitude'),
     'help' => t("Longitude"), 
     'field' => array(
       'handler' => 'views_handler_field',
       'click sortable' => TRUE,
     ),
     'filter' => array(
       'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
       'handler' => 'views_handler_argument_string',
     ),
     'sort' => array(
       'handler' => 'views_handler_sort',
     ),
    );
      
    return $data;
}

function visitorinfo_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'visitorinfo'),
    ),
    'handlers' => array(
      // filter handlers
      'visitorinfo_handler_filter_field_exists' => array(
        'parent' => 'views_handler_filter',
      ),
    ),
  );
}
