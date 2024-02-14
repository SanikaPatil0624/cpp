<!DOCTYPE html>
<!-- saved from url=(0082)https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true -->
<html lang="en-us" style="--font-family-text: OpenSans, Arial, Helvetica, sans-serif; --font-family-input: SourceCodePro, monaco, Courier, monospace;"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><style id="react-tooltip">.__react_component_tooltip{border-radius:3px;display:inline-block;font-size:13px;left:-999em;opacity:0;padding:8px 21px;position:fixed;pointer-events:none;transition:opacity 0.3s ease-out;top:-999em;visibility:hidden;z-index:999}.__react_component_tooltip.allow_hover{pointer-events:auto}.__react_component_tooltip:before,.__react_component_tooltip:after{content:"";width:0;height:0;position:absolute}.__react_component_tooltip.show{opacity:0.9;margin-top:0px;margin-left:0px;visibility:visible}.__react_component_tooltip.type-dark{color:#fff;background-color:#222}.__react_component_tooltip.type-dark.place-top:after{border-top-color:#222;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-dark.place-bottom:after{border-bottom-color:#222;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-dark.place-left:after{border-left-color:#222;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-dark.place-right:after{border-right-color:#222;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-dark.border{border:1px solid #fff}.__react_component_tooltip.type-dark.border.place-top:before{border-top:8px solid #fff}.__react_component_tooltip.type-dark.border.place-bottom:before{border-bottom:8px solid #fff}.__react_component_tooltip.type-dark.border.place-left:before{border-left:8px solid #fff}.__react_component_tooltip.type-dark.border.place-right:before{border-right:8px solid #fff}.__react_component_tooltip.type-success{color:#fff;background-color:#8DC572}.__react_component_tooltip.type-success.place-top:after{border-top-color:#8DC572;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-success.place-bottom:after{border-bottom-color:#8DC572;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-success.place-left:after{border-left-color:#8DC572;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-success.place-right:after{border-right-color:#8DC572;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-success.border{border:1px solid #fff}.__react_component_tooltip.type-success.border.place-top:before{border-top:8px solid #fff}.__react_component_tooltip.type-success.border.place-bottom:before{border-bottom:8px solid #fff}.__react_component_tooltip.type-success.border.place-left:before{border-left:8px solid #fff}.__react_component_tooltip.type-success.border.place-right:before{border-right:8px solid #fff}.__react_component_tooltip.type-warning{color:#fff;background-color:#F0AD4E}.__react_component_tooltip.type-warning.place-top:after{border-top-color:#F0AD4E;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-warning.place-bottom:after{border-bottom-color:#F0AD4E;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-warning.place-left:after{border-left-color:#F0AD4E;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-warning.place-right:after{border-right-color:#F0AD4E;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-warning.border{border:1px solid #fff}.__react_component_tooltip.type-warning.border.place-top:before{border-top:8px solid #fff}.__react_component_tooltip.type-warning.border.place-bottom:before{border-bottom:8px solid #fff}.__react_component_tooltip.type-warning.border.place-left:before{border-left:8px solid #fff}.__react_component_tooltip.type-warning.border.place-right:before{border-right:8px solid #fff}.__react_component_tooltip.type-error{color:#fff;background-color:#BE6464}.__react_component_tooltip.type-error.place-top:after{border-top-color:#BE6464;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-error.place-bottom:after{border-bottom-color:#BE6464;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-error.place-left:after{border-left-color:#BE6464;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-error.place-right:after{border-right-color:#BE6464;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-error.border{border:1px solid #fff}.__react_component_tooltip.type-error.border.place-top:before{border-top:8px solid #fff}.__react_component_tooltip.type-error.border.place-bottom:before{border-bottom:8px solid #fff}.__react_component_tooltip.type-error.border.place-left:before{border-left:8px solid #fff}.__react_component_tooltip.type-error.border.place-right:before{border-right:8px solid #fff}.__react_component_tooltip.type-info{color:#fff;background-color:#337AB7}.__react_component_tooltip.type-info.place-top:after{border-top-color:#337AB7;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-info.place-bottom:after{border-bottom-color:#337AB7;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-info.place-left:after{border-left-color:#337AB7;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-info.place-right:after{border-right-color:#337AB7;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-info.border{border:1px solid #fff}.__react_component_tooltip.type-info.border.place-top:before{border-top:8px solid #fff}.__react_component_tooltip.type-info.border.place-bottom:before{border-bottom:8px solid #fff}.__react_component_tooltip.type-info.border.place-left:before{border-left:8px solid #fff}.__react_component_tooltip.type-info.border.place-right:before{border-right:8px solid #fff}.__react_component_tooltip.type-light{color:#222;background-color:#fff}.__react_component_tooltip.type-light.place-top:after{border-top-color:#fff;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-light.place-bottom:after{border-bottom-color:#fff;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-light.place-left:after{border-left-color:#fff;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-light.place-right:after{border-right-color:#fff;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-light.border{border:1px solid #222}.__react_component_tooltip.type-light.border.place-top:before{border-top:8px solid #222}.__react_component_tooltip.type-light.border.place-bottom:before{border-bottom:8px solid #222}.__react_component_tooltip.type-light.border.place-left:before{border-left:8px solid #222}.__react_component_tooltip.type-light.border.place-right:before{border-right:8px solid #222}.__react_component_tooltip.place-top{margin-top:-10px}.__react_component_tooltip.place-top:before{border-left:10px solid transparent;border-right:10px solid transparent;bottom:-8px;left:50%;margin-left:-10px}.__react_component_tooltip.place-top:after{border-left:8px solid transparent;border-right:8px solid transparent;bottom:-6px;left:50%;margin-left:-8px}.__react_component_tooltip.place-bottom{margin-top:10px}.__react_component_tooltip.place-bottom:before{border-left:10px solid transparent;border-right:10px solid transparent;top:-8px;left:50%;margin-left:-10px}.__react_component_tooltip.place-bottom:after{border-left:8px solid transparent;border-right:8px solid transparent;top:-6px;left:50%;margin-left:-8px}.__react_component_tooltip.place-left{margin-left:-10px}.__react_component_tooltip.place-left:before{border-top:6px solid transparent;border-bottom:6px solid transparent;right:-8px;top:50%;margin-top:-5px}.__react_component_tooltip.place-left:after{border-top:5px solid transparent;border-bottom:5px solid transparent;right:-6px;top:50%;margin-top:-4px}.__react_component_tooltip.place-right{margin-left:10px}.__react_component_tooltip.place-right:before{border-top:6px solid transparent;border-bottom:6px solid transparent;left:-8px;top:50%;margin-top:-5px}.__react_component_tooltip.place-right:after{border-top:5px solid transparent;border-bottom:5px solid transparent;left:-6px;top:50%;margin-top:-4px}.__react_component_tooltip .multi-line{display:block;padding:2px 0px;text-align:center}</style>
  <!-- Prefetch dns on production -->
  
    <link rel="dns-prefetch" href="https://pubsub.hackerrank.com/">

    <!-- dns-prefetch pendo for HRW -->
    
  
  <!-- NREUM: (1) -->
  

  
    <link href="./Strings _files/hackerrank_r_old_trimmed-8655e4e2.css" media="all" rel="stylesheet"><link rel="stylesheet" href="./Strings _files/hackerrank_r_old_trimmed-8655e4e2.css">
  

  

<meta property="og:image" id="meta-og-image" content="https://hrcdn.net/og/default.jpg"><meta property="og:site_name" id="meta-og-site" content="HackerRank"><meta property="og:type" id="meta-og-type" content="website"><meta property="article:author" content="https://www.facebook.com/hackerrank"><meta name="twitter:card" id="meta-twitter-card" content="summary"><meta name="twitter:site" id="meta-twitter-site" content="@hackerrank"><meta property="fb:app_id" id="meta-fb-id" content="347499128655783"><meta name="theme-color" content="hsla(214.29, 15.56%, 26.47%, 1)"><meta content="authenticity_token" name="csrf-param" id="csrf-param"><meta content="WNnIzk1aLmbpS2AE979jqW0OKY6LjWQ/7sxpeU7uPJcsDIy0Nj8a73raoj21jpiCrKI1J3JB+arg9wF/U3LW+A==" name="csrf-token" id="csrf-token">
<script type="text/javascript" async="" src="./Strings _files/analytics.js.download"></script><script type="text/javascript" async="" src="./Strings _files/gtm.js.download"></script><script type="text/javascript" async="" src="./Strings _files/analytics.js.download"></script><script async="" src="./Strings _files/gtm(1).js.download"></script><script>
  window.BACKEND_ENDPOINT = 'https://www.hackerrank.com/';
  window.MANIFEST_VERSION = 'bac0be5729';
</script>

<meta name="viewport" content="width=device-width, initial-scale=1">
<link rel="icon" type="image/png" href="https://hrcdn.net/fcore/assets/favicon-ddc852f75a.png">

<!-- Prefetch dns on production -->

  <link rel="dns-prefetch" href="https://hrcdn.net/">
  <link rel="dns-prefetch" href="https://d3keuzeb2crhkn.cloudfront.net/">
  <link rel="dns-prefetch" href="https://notifications.hackerrank.com/">
  <link rel="dns-prefetch" href="https://api.mixpanel.com/">
  <link rel="dns-prefetch" href="https://metrics.hackerrank.com/">
  <link rel="preconnect" href="https://sentry.io/">
  <link rel="dns-prefetch" href="https://sentry.io/">
  <link rel="dns-prefetch" href="https://browser.sentry-cdn.com/">
  <link rel="dns-prefetch" href="https://www.google-analytics.com/">
  <link rel="dns-prefetch" href="https://www.googletagmanager.com/">



  <link rel="stylesheet" type="text/css" href="./Strings _files/modules-node_modules_app-server_es_client_index_js-node_modules_app-server_es_ui_component_co-32adef-bdde6137.css">

  <link rel="stylesheet" type="text/css" href="./Strings _files/defaultVendors-node_modules_babel_runtime_helpers_asyncToGenerator_js-node_modules_babel_runt-e0fdb4-9b10ac69.css">

  <link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_app-f28e2194.css">

  <link rel="stylesheet" type="text/css" href="./Strings _files/modules-node_modules_ui-kit_es_components_loaders_cursor_loader_scss-b3d0c2f7.css">

  <link rel="stylesheet" type="text/css" href="./Strings _files/modules-node_modules_app-server_es_ui_component_modals_confirm_js-node_modules_app-server_es_-958e8c-801633b3.css">

  <link rel="stylesheet" type="text/css" href="./Strings _files/modules-node_modules_ui-kit_es_components_card_card_js-node_modules_ui-kit_es_components_circ-114815-7dfaced6.css">

  <link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_community-b1e272f8.css">

  <link rel="stylesheet" type="text/css" href="./Strings _files/commons-src_shared_community_dashboard_cards_email_verification_card_js-src_shared_community_-7d12ac-4fcc3d13.css">

  <link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_dashboard_v2-2b4d022b.css">


<!-- Prefetch / preload assets on production -->


  <!-- preload scripts required on the same page -->
  <link rel="preload" as="script" href="./Strings _files/hackerrank_r_vendor-2bc7c1b2f5.js.download">
  <link rel="preload" as="script" href="./Strings _files/hackerrank_r_client-0296d393.js.download">
  <link rel="preload" as="script" href="./Strings _files/runtime-8c589d28.js.download">
  <link rel="preload" as="script" href="./Strings _files/chunks_runtime-3ced2eb5b8.js.download">

  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_client_index_js-node_modules_app-server_es_ui_component_co-32adef-fae30f60.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_babel_runtime_helpers_asyncToGenerator_js-node_modules_babel_runt-e0fdb4-ae8ab939.js">
  
    <link rel="preload" as="script" href="./Strings _files/hackerrank_r_app-4e497a58.js.download">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_dropdown_dropdown_js-node_modules_ui-kit_es_compone-0257e6-f73a7430.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_native_ad_native_ad_action_constant_js-node_m-e08779-a6924574.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-icons_es_ui_icons_FileText_js-node_modules_ui-kit_es_components_accor-68eae5-9639618d.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_form_utils_js-node_modules_ui-kit_es_components_forms_button_-9eca58-d4ab5575.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_modals_confirm_js-node_modules_app-server_es_-958e8c-94b2db6c.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_card_card_js-node_modules_ui-kit_es_components_circ-114815-9e3f2686.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_badges_badge_js-node_modules_app-server_es_ui-6f173e-b53330dc.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_form-alert_node_modules_core-js_modules_es6_array_iter-dc5af2-b096a1cd.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-selectv3_async-creatable_dist_react-select_browser_esm_js-n-94fa5e-9e4d92c8.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__baseKeys_js-node_modules_ui-kit_node_-c5609c-605d5147.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hackerrank_hrds-components_dist_esm_index_js-node_modules_hackerr-92eb40-059ecd28.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_debounce-promise_dist_index_js-node_modules_formik_dist_formik_esm_js-94e7d498.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-responsive_dist_react-responsive_js-3af455fe.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_socket-redis_client_index_js-24eb7598.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_shared-components_form-alert_node_modules_core-js_modules__add-to-e3ccd6-299581fb.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-oauth_google_dist_index_esm_js-node_modules_core-js_modules-456ad5-b64896e0.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_dom-scroll-into-view_index_js-node_modules_lodash_findIndex_js-no-73b376-89e58c83.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_util_js-8a3f02cf.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_util_hrc_dark_mode_use_user_theme_js-src_shared_sourcing_skills_-36e95f-bf27cb33.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/hackerrank_r_community-f9e2107d.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_mock_tests_mock_test_card_js-src_shared_community_mock_tests_moc-3712aa-6badc3ff.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_dashboard_cards_email_verification_card_js-src_shared_community_-7d12ac-0a744276.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/hackerrank_r_dashboard_v2-7fe07494.js">
  
  <!-- preload scripts end -->



<!-- Load promise polyfill for the non-believers -->
<script>
  (window.Promise && window.Promise.prototype.finally) || document.write('<script src="https://hrcdn.net/fcore/assets/polyfill-d05a380d50.min.js" type="text\/javascript"><\/script>');
</script>
<!-- Added for GTM and sentry -->


<script>
  window.dataLayer = window.dataLayer || [];
</script>


<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-NZTBQVZ');</script>





<script>
  var errorQueue = [];
  (function(window) {
    function errorListener(event) {
      if (event.type === 'unhandledrejection' && !event.reason) {
        return;
      }
      errorQueue.push(event);
    }
    window.addEventListener('error', errorListener);
    window.addEventListener('unhandledrejection', errorListener);
    window.removeInitialErrorListeners = function() {
      window.removeEventListener('error', errorListener);
      window.removeEventListener('unhandledrejection', errorListener);
    };
    window.getSentryConfig = function () {
      return {
        token: "6b2d52b23d5a4dd4bc44330335327c04",
        projectID: "234162",
      };
    };
  })(window);
</script>




  <!-- Prefetch / preload assets on production if we are not loading it in first place -->
  
  
    
      <link rel="prefetch" href="https://hrcdn.net/fcore/assets/backbone_styles/dashboard-173b5e46b8.css">
    
    <!-- Prefetch old css files end -->
  
  
    <style id="stitches">
      /* This is stitches CSS */
      --sxs{--sxs:0 t-fhFiIH}@media{:root,.t-fhFiIH{--colors-baseWhite:#FFFFFF;--colors-baseBlack:#050B1A;--colors-primary50:#EBFAF0;--colors-primary100:#D2F4DE;--colors-primary200:#81DFA2;--colors-primary300:#32C766;--colors-primary400:#1BA94C;--colors-primary500:#068932;--colors-primary600:#057A2D;--colors-primary700:#046224;--colors-primary800:#03491B;--colors-primary900:#023112;--colors-secondary50:#F0FBFF;--colors-secondary100:#CCF3FF;--colors-secondary200:#47D4FF;--colors-secondary300:#00ACE0;--colors-secondary400:#097BBF;--colors-secondary500:#11639C;--colors-secondary600:#1F3D83;--colors-secondary700:#183067;--colors-secondary800:#142652;--colors-secondary900:#0F1D3E;--colors-neutral50:#F3F7F7;--colors-neutral100:#E7EEEF;--colors-neutral200:#B7C9CC;--colors-neutral300:#94AAAD;--colors-neutral400:#738F93;--colors-neutral500:#61616B;--colors-neutral700:#576871;--colors-neutral800:#39424E;--colors-neutral900:#0E141E;--colors-critical50:#FEF8F9;--colors-critical100:#FBE9EB;--colors-critical200:#F8DADC;--colors-critical300:#F4C8CC;--colors-critical400:#F0B5BA;--colors-critical500:#EC9EA5;--colors-critical600:#E6838B;--colors-critical700:#E00000;--colors-critical800:#B80000;--colors-critical900:#8F0000;--colors-warning50:#FDF9F5;--colors-warning100:#F9EBE1;--colors-warning200:#F5DCCB;--colors-warning300:#F0CCB3;--colors-warning400:#EABA98;--colors-warning500:#E4A679;--colors-warning600:#DD8D54;--colors-warning700:#D36D24;--colors-warning800:#B54C00;--colors-warning900:#6B2D00;--colors-success50:#F0FCFB;--colors-success100:#CEF5F2;--colors-success200:#A8EEE8;--colors-success300:#7AE4DC;--colors-success400:#40D9CC;--colors-success500:#00C9B8;--colors-success600:#00B3A4;--colors-success700:#009A8D;--colors-success800:#007A70;--colors-success900:#004842;--fonts-sans:Open Sans, Arial, Helvetica, sans-serif;--fonts-mono:Source Code pro, monaco, Courier, monospace;--space-1:4px;--space-2:8px;--space-3:16px;--space-4:24px;--space-5:32px;--space-6:48px;--space-7:96px;--sizes-1:4px;--sizes-2:8px;--sizes-3:16px;--sizes-4:24px;--sizes-5:32px;--sizes-6:48px;--sizes-7:64px;--sizes-8:96px;--sizes-buttonHeightSm:32px;--sizes-buttonHeight:40px;--sizes-buttonHeightLg:48px;--sizes-inputHeight:40px;--sizes-inputWidth:320px;--sizes-minInputWidth:180px;--sizes-containerSm:416px;--sizes-containerMd:636px;--sizes-containerLg:856px;--fontSizes-1:0.75rem;--fontSizes-2:0.875rem;--fontSizes-3:1rem;--fontSizes-4:1.25rem;--fontSizes-5:1.563rem;--fontSizes-6:1.953rem;--fontSizes-7:2.441rem;--fontSizes-8:3.052rem;--fontSizes-9:3.815rem;--fontSizes-button:1rem;--fontSizes-buttonSm:0.812rem;--fontWeights-1:400;--fontWeights-2:600;--fontWeights-3:700;--lineHeights-0:1rem;--lineHeights-1:1.25rem;--lineHeights-2:1.5rem;--lineHeights-3:1.75rem;--lineHeights-4:2rem;--lineHeights-5:2.5rem;--lineHeights-6:3.5rem;--lineHeights-7:3.75rem;--lineHeights-8:4rem;--lineHeights-9:4.5rem;--radii-1:4px;--radii-round:50%;--radii-pill:9999px;--zIndices-1:100;--zIndices-2:200;--zIndices-3:300;--zIndices-4:400;--zIndices-max:999;--shadows-1:0px 1px 4px rgba(37, 69, 105, 0.05), 0px 2px 8px rgba(37, 69, 105, 0.05);--shadows-2:0px 1px 4px rgba(37, 69, 105, 0.1), 0px 3px 12px rgba(37, 69, 105, 0.1)}}--sxs{--sxs:1 k-eqHaWw k-jwXwnQ}@media{@keyframes k-eqHaWw{100%{transform:rotate(360deg)}}@keyframes k-jwXwnQ{0%{stroke-dasharray:1, 150;stroke-dashoffset:0}50%{stroke-dasharray:90, 150;stroke-dashoffset:-35}100%{stroke-dasharray:90, 150;stroke-dashoffset:-124}}} 
      --sxs{--sxs:0 t-koXUxF}@media{:root,.t-koXUxF{--colors-baseWhite:hsl(0, 0%, 100%);--colors-baseBlack:hsl(221, 69%, 6%);--colors-primary50:hsl(140, 60%, 95%);--colors-primary100:hsl(141, 61%, 89%);--colors-primary200:hsl(141, 59%, 69%);--colors-primary300:hsl(141, 60%, 49%);--colors-primary400:hsl(141, 72%, 38%);--colors-primary500:hsl(140, 92%, 28%);--colors-primary600:hsl(141, 92%, 25%);--colors-primary700:hsl(140, 92%, 20%);--colors-primary800:hsl(141, 92%, 15%);--colors-primary900:hsl(140, 92%, 10%);--colors-secondary50:hsl(196, 100%, 97%);--colors-secondary100:hsl(194, 100%, 90%);--colors-secondary200:hsl(194, 100%, 64%);--colors-secondary300:hsl(194, 100%, 44%);--colors-secondary400:hsl(202, 91%, 39%);--colors-secondary500:hsl(205, 80%, 34%);--colors-secondary600:hsl(222, 62%, 32%);--colors-secondary700:hsl(222, 62%, 25%);--colors-secondary800:hsl(223, 61%, 20%);--colors-secondary900:hsl(222, 61%, 15%);--colors-neutral50:hsl(180, 20%, 96%);--colors-neutral100:hsl(187, 20%, 92%);--colors-neutral200:hsl(189, 17%, 76%);--colors-neutral300:hsl(187, 13%, 63%);--colors-neutral400:hsl(187, 13%, 51%);--colors-neutral700:hsl(201, 13%, 39%);--colors-neutral800:hsl(214, 16%, 26%);--colors-neutral900:hsl(218, 36%, 9%);--colors-critical50:hsl(350, 75%, 98%);--colors-critical100:hsl(353, 69%, 95%);--colors-critical200:hsl(356, 68%, 91%);--colors-critical300:hsl(355, 67%, 87%);--colors-critical400:hsl(355, 66%, 83%);--colors-critical500:hsl(355, 67%, 77%);--colors-critical600:hsl(355, 66%, 71%);--colors-critical700:hsl(355, 67%, 62%);--colors-critical800:hsl(355, 74%, 47%);--colors-critical900:hsl(355, 100%, 26%);--colors-warning50:hsl(30, 67%, 98%);--colors-warning100:hsl(25, 67%, 93%);--colors-warning200:hsl(24, 68%, 88%);--colors-warning300:hsl(25, 67%, 82%);--colors-warning400:hsl(25, 66%, 76%);--colors-warning500:hsl(25, 66%, 68%);--colors-warning600:hsl(25, 67%, 60%);--colors-warning700:hsl(25, 71%, 48%);--colors-warning800:hsl(25, 100%, 35%);--colors-warning900:hsl(25, 100%, 21%);--colors-success50:hsl(175, 67%, 96%);--colors-success100:hsl(175, 66%, 88%);--colors-success200:hsl(175, 67%, 80%);--colors-success300:hsl(175, 66%, 69%);--colors-success400:hsl(175, 67%, 55%);--colors-success500:hsl(175, 100%, 39%);--colors-success600:hsl(175, 100%, 35%);--colors-success700:hsl(175, 100%, 30%);--colors-success800:hsl(175, 100%, 24%);--colors-success900:hsl(175, 100%, 14%);--fonts-sans:Open Sans, Arial, Helvetica, sans-serif;--fonts-mono:Source Code pro, monaco, Courier, monospace;--space-1:4px;--space-2:8px;--space-3:16px;--space-4:24px;--space-5:32px;--space-6:48px;--space-7:96px;--sizes-1:4px;--sizes-2:8px;--sizes-3:16px;--sizes-4:24px;--sizes-5:32px;--sizes-6:48px;--sizes-7:64px;--sizes-8:96px;--sizes-buttonHeightSm:32px;--sizes-buttonHeight:40px;--sizes-buttonHeightLg:48px;--sizes-inputHeight:40px;--sizes-inputWidth:320px;--sizes-minInputWidth:180px;--sizes-containerSm:416px;--sizes-containerMd:636px;--sizes-containerLg:856px;--fontSizes-1:0.75rem;--fontSizes-2:0.875rem;--fontSizes-3:1rem;--fontSizes-4:1.25rem;--fontSizes-5:1.563rem;--fontSizes-6:1.953rem;--fontSizes-7:2.441rem;--fontSizes-8:3.052rem;--fontSizes-9:3.815rem;--fontSizes-button:1rem;--fontSizes-buttonSm:0.812rem;--fontWeights-1:400;--fontWeights-2:600;--fontWeights-3:700;--lineHeights-0:1rem;--lineHeights-1:1.25rem;--lineHeights-2:1.5rem;--lineHeights-3:1.75rem;--lineHeights-4:2rem;--lineHeights-5:2.5rem;--lineHeights-6:3.5rem;--lineHeights-7:3.75rem;--lineHeights-8:4rem;--lineHeights-9:4.5rem;--radii-1:4px;--radii-round:50%;--radii-pill:9999px;--zIndices-1:100;--zIndices-2:200;--zIndices-3:300;--zIndices-4:400;--zIndices-max:999;--shadows-1:0px 1px 4px rgba(37, 69, 105, 0.05), 0px 2px 8px rgba(37, 69, 105, 0.05);--shadows-2:0px 1px 4px rgba(37, 69, 105, 0.1), 0px 3px 12px rgba(37, 69, 105, 0.1)}}--sxs{--sxs:1 k-GtRcY k-cgEAml k-eqHaWw k-jwXwnQ k-fntWbc k-jTSnTZ k-jqPDnV k-btloMR k-bWCOmv k-dJEvCf k-ilhlcC k-ghIPJO ggPDvH}@media{@keyframes k-GtRcY{0%{height:0;overflow:hidden}99%{height:var(--radix-accordion-content-height);overflow:hidden}100%{overflow:visible}}@keyframes k-cgEAml{from{height:var(--radix-accordion-content-height);overflow:hidden}to{height:0;overflow:hidden}}@keyframes k-eqHaWw{100%{transform:rotate(360deg)}}@keyframes k-jwXwnQ{0%{stroke-dasharray:1, 150;stroke-dashoffset:0}50%{stroke-dasharray:90, 150;stroke-dashoffset:-35}100%{stroke-dasharray:90, 150;stroke-dashoffset:-124}}@keyframes k-fntWbc{0%{height:0;overflow:hidden}99%{height:var(--radix-collapsible-content-height);overflow:hidden}100%{overflow:visible}}@keyframes k-jTSnTZ{from{height:var(--radix-collapsible-content-height);overflow:hidden}to{height:0;overflow:hidden}}@keyframes k-jqPDnV{from{opacity:0}to{opacity:1}}@keyframes k-btloMR{from{opacity:1}to{opacity:0}}@keyframes k-bWCOmv{from{transform:var(---transformValue)}to{transform:translate3d(0,0,0)}}@keyframes k-dJEvCf{from{transform:translate3d(0,0,0)}to{transform:var(---transformValue)}}@keyframes k-ilhlcC{from{opacity:0;transform:translate(0, -20px) scale(0.96)}to{opacity:1;transform:translate(0, 0) scale(1)}}@keyframes k-ghIPJO{from{opacity:0;transform:translate(-50%, -20px) scale(0.96)}to{opacity:1;transform:translate(-50%, 0) scale(1)}}.hr-toaster,#floating-ui-root,.portal-wrapper,._pendo-badge{pointer-events:auto}}--sxs{--sxs:2 c-jzzXej c-PJLV c-frhDCa c-beGkFe c-dwmFAm c-bhJNUt c-jTYnbn c-bUyyQp c-dZydjc c-fJwvaD c-jbfHSp c-dckzdi c-hdHRLY c-jNIUjr c-bNIzaZ c-ivhXVM c-dbqrOz c-lesPJm c-jFoGPh c-dgkpWz c-cmpvrW c-gILCRn c-CeHAS c-lnkmko c-kUdqAe c-gLEXln c-bwHmro c-bXzPNn c-iLslcY c-exMcQs c-kNzlbw c-gMwfgq c-hWNBpN c-Dwrjf}@media{.c-jzzXej{border-radius:50%;overflow:hidden}.c-frhDCa{padding:0;margin:0;box-sizing:border-box;border-radius:0.5rem}.c-beGkFe{-webkit-appearance:none;appearance:none;margin:0;outline:none;text-decoration:none;-webkit-user-select:none;user-select:none;-webkit-tap-highlight-color:var(--hr-button-text-color);border:none;cursor:pointer;box-sizing:border-box;line-height:100%;border-radius:0.25rem;height:2.25rem;transition:color, backgroundColor, borderColor;transition-duration:.2s;transition-timing-function:ease-in-out}.c-beGkFe[disabled],.c-beGkFe[aria-disabled="true"]{cursor:not-allowed}.c-beGkFe.c-beGkFe{font-weight:600;font-family:var(--hr-font-family-text)}.c-dwmFAm{font-size:1rem}.c-jTYnbn{width:42px;height:42px;object-fit:contain;object-position:center;border-radius:4px}.c-bUyyQp{flex-grow:1;flex-wrap:wrap;width:100%;overflow:hidden}.c-dZydjc{text-overflow:ellipsis;white-space:nowrap;max-width:75%;max-height:36px;overflow-y:hidden;color:var(--color-input-text);overflow-x:hidden}.c-fJwvaD{color:var(--color-input-text);margin-top:var(--hr-spacing-03) !important;line-height:26px;overflow:hidden;max-height:52px;text-overflow:ellipsis;word-break:break-word;-webkit-line-clamp:2;-webkit-box-orient:vertical}.c-jbfHSp{color:var(--color-input-text);margin-top:var(--hr-spacing-02) !important}.c-dckzdi{border-radius:100px;cursor:default;transition:color .2s ease-in}.c-bhJNUt{padding:var(--hr-spacing-04) !important;flex-direction:column;height:100%}.c-hdHRLY{list-style:none}.c-bNIzaZ{display:flex;align-items:center;background:none;color:inherit;border:none;padding:var(--hr-spacing-01);cursor:pointer;font-size:1.25rem;border-radius:var(--hr-spacing-01);outline:none}.c-bNIzaZ > svg{fon-size:inherit}.c-jNIUjr{border:1px solid transparent;color:var(--hr-pagination-icon-color-default);cursor:pointer;font-size:1rem;height:28px;width:28px}.c-jNIUjr:hover{border:1px solid var(--hr-pagination-icon-border-color-hover);border-radius:4px;background-color:var(--hr-pagination-icon-background-color-hover);color:var(--hr-pagination-icon-color-hover)}.c-jNIUjr[disabled]{color:var(--hr-pagination-icon-color-disabled);cursor:not-allowed}.c-jNIUjr[disabled]:hover{background-color:unset;border-color:transparent;color:var(--hr-pagination-icon-color-disabled)}.c-ivhXVM{height:28px;min-width:28px;border:1px solid var(--hr-pagination-border-color-default);border-radius:4px;background-color:transparent;color:var(--hr-pagination-text-color-default)}.c-ivhXVM.c-ivhXVM{font-family:var(--hr-font-family-text)}.c-ivhXVM:hover{border-color:var(--hr-pagination-border-color-hover);color:var(--hr-pagination-text-color-hover);cursor:pointer}.c-ivhXVM:focus{outline:none}.c-ivhXVM[disabled]{color:var(--hr-pagination-icon-color-disabled);cursor:default}.c-dbqrOz{margin:0;border:0;height:1px;width:100%}.c-dgkpWz{all:unset;color:var(--hr-tab-text-color-default);padding:var(--hr-spacing-04)}.c-dgkpWz.c-dgkpWz{font-weight:600;font-family:var(--hr-font-family-text)}.c-dgkpWz:hover{background-color:var(--hr-tab-background-color-hover);border-bottom:2px solid var(--hr-tab-border-color-hover);color:var(--hr-tab-text-color-hover);cursor:pointer;padding-bottom:15px}.c-dgkpWz:active{background-color:var(--hr-tab-background-color-pressed);border-bottom:2px solid var(--hr-tab-border-color-pressed) !important;color:var(--hr-tab-text-color-pressed) !important}.c-dgkpWz[data-state=active]{border-bottom:2px solid var(--hr-tab-border-color-active);color:var(--hr-tab-text-color-active);padding-bottom:15px}.c-dgkpWz[data-disabled]{color:var(--hr-tab-text-color-disabled);pointer-events:none}.c-dgkpWz:focus-visible{border-radius:2px}.c-jFoGPh{height:52px}.c-jFoGPh > [role=tab]:focus-visible{position:relative}.c-lesPJm{box-sizing:border-box}.c-cmpvrW{position:relative}.c-gILCRn{all:revert}.c-gILCRn[type=text],.c-gILCRn[type=password],.c-gILCRn[type=number],.c-gILCRn[type=search]{all:revert}.c-gILCRn.c-gILCRn{border-radius:4px;border:1px solid var(--hr-input-border-color-default);border-bottom-color:var(--hr-input-boundary-border-color-default);box-sizing:border-box;color:var(--hr-input-text-color-default);background-color:var(--hr-input-background-color-default);font-size:0.875rem;padding:var(--hr-spacing-02);width:100%;font-family:var(--hr-font-family-text)}.c-gILCRn.c-gILCRn::placeholder{color:var(--hr-input-placeholder-text-color);font-size:0.875rem}.c-gILCRn.c-gILCRn::input-placeholder{color:var(--hr-input-placeholder-text-color);font-size:0.875rem}.c-gILCRn.c-gILCRn:hover{border-color:var(--hr-input-border-color-hover)}.c-gILCRn.c-gILCRn:focus{outline:2px solid var(--hr-app-outline-color);outline-offset:1px;background-color:var(--hr-input-background-color-default)}.c-gILCRn.c-gILCRn:focus ~ div:not([data-input-icon-state="error"]) svg{color:var(--hr-input-icon-color-active)}.c-gILCRn.c-gILCRn:focus-visible{outline:2px solid var(--hr-app-outline-color);outline-offset:1px;background-color:var(--hr-input-background-color-default)}.c-gILCRn.c-gILCRn:focus-visible ~ div:not([data-input-icon-state="error"]) svg{color:var(--hr-input-icon-color-active)}.c-gILCRn.c-gILCRn:disabled{text-fill-color:var(--hr-input-text-color-disabled);color:var(--hr-input-text-color-disabled);background-color:var(--hr-input-background-color-disabled);border-color:var(--hr-input-border-color-default);cursor:not-allowed}.c-gILCRn.c-gILCRn:disabled:hover{border-color:var(--hr-input-border-color-default)}.c-gILCRn.c-gILCRn:disabled ~ div:not([data-input-icon-state="error"]) svg{color:var(--hr-input-icon-color-disabled)}.c-gILCRn.c-gILCRn[type=password]:not(:placeholder-shown){text-security:disc !important;font-size:0.875rem;letter-spacing:0.08em}.c-gILCRn.c-gILCRn[type=number]::-webkit-outer-spin-button{-webkit-appearance:none;appearance:none;margin:0}.c-gILCRn.c-gILCRn[type=number]::-webkit-inner-spin-button{-webkit-appearance:none;appearance:none;margin:0}.c-gILCRn.c-gILCRn[type=number]{-moz-appearance:textfield}.c-CeHAS{color:var(--hr-input-icon-color-default);font-size:var(--hr-spacing-05);line-height:0;border-radius:var(--hr-spacing-01)}.c-lnkmko{text-decoration:underline;text-underline-offset:var(--hr-spacing-01)}.c-lnkmko.c-lnkmko{font-family:var(--hr-font-family-text)}.c-lnkmko.c-lnkmko:hover{color:var(--hr-anchor-text-color-hover)}.c-kUdqAe{overflow:auto;width:100%;border:1px solid var(--hr-table-border-color)}.c-gLEXln{all:revert;border-collapse:collapse;border-top-right-radius:var(--hr-spacing-01);border-top-left-radius:var(--hr-spacing-01);width:100%;background-color:var(--hr-table-background-color);box-sizing:border-box}.c-gLEXln tbody tr:last-child{border-bottom:none}.c-gLEXln tbody tr:last-child td{border-bottom:none}.c-gLEXln tr[data-hr-focus-item="round"]:focus-visible,.c-gLEXln th[data-hr-focus-item="round"]:focus-visible,.c-gLEXln td[data-hr-focus-item="round"]:focus-visible{outline-offset:-4px}.c-gLEXln [data-hr-table-sort-button][data-hr-focus-item="round"]:focus-visible{outline-offset:-3px}.c-bwHmro{border-bottom:1px solid var(--hr-table-border-color)}.c-bXzPNn{min-height:52px;color:var(--hr-table-text-color);line-height:var(--hr-spacing-05);vertical-align:middle}.c-iLslcY{display:inline-block;vertical-align:middle}.c-exMcQs{border-bottom:1px solid var(--hr-table-border-color)}.c-exMcQs:focus{outline:none}.c-exMcQs[data-hr-focus-item="round"]:focus-visible [data-table-cell-sticky]:after{top:4px;height:calc(100% - 7px)}.c-exMcQs[data-hr-focus-item="round"]:focus-visible [data-table-cell-sticky]:first-of-type:after{left:4px;width:calc(100% - 4px)}.c-exMcQs [data-table-cell-sticky]:after{content:"";width:100%;height:100%;display:block;background:var(--hr-table-background-color);position:absolute;top:0;left:0;z-index:-1}.c-kNzlbw{padding-top:var(--hr-spacing-04);padding-bottom:var(--hr-spacing-04);padding-left:var(--hr-spacing-04);padding-right:var(--hr-spacing-04);min-height:52px;vertical-align:middle}.c-gMwfgq{color:var(--hr-table-text-color);font-weight:400}.c-hWNBpN{animation:k-eqHaWw 2s linear infinite;color:var(--hr-spinner-color);width:var(--sizes-4);height:var(--sizes-4)}.c-hWNBpN circle{stroke-linecap:round;animation:k-jwXwnQ 1.5s ease-in-out infinite}.c-Dwrjf{-webkit-appearance:none;appearance:none;text-decoration:none;-webkit-user-select:none;user-select:none;width:var(--hr-spacing-04);height:var(--hr-spacing-04);margin-left:0.375rem;border:none;border-radius:var(--hr-spacing-01);cursor:pointer;background-color:inherit;font-size:0.75rem;outline:none;color:var(--hr-tag-close-icon-color)}}--sxs{--sxs:3 c-jzzXej-FActp-size-large c-jzzXej-RPEFT-color-dark c-PJLV-kRctyV-spacing-24 c-frhDCa-Kotlb-padding-24 c-frhDCa-ylZoY-background-light c-beGkFe-eqbrNw-variant-ghost c-beGkFe-bwrheh-size-medium c-beGkFe-jRxxkV-isIconButton-true c-PJLV-OtkJb-spacing-48 c-frhDCa-htRqGB-variant-outlined c-frhDCa-juwdIk-padding-48 c-dckzdi-ghnxRT-color-secondary c-ivhXVM-krtRBm-isActive-true c-ivhXVM-fIlGbM-isEllipsis-true c-dbqrOz-kPILiq-theme-light c-gILCRn-ijooyE-hasStartAdornment-true c-gILCRn-gUIiUt-elementType-text c-CeHAS-gLOLQa-align-left c-lnkmko-bRcXDr-underline-hover c-beGkFe-dshqME-variant-primary c-bwHmro-jLrsjG-bgcolor-grey c-bXzPNn-fMDQqx-align-left c-bXzPNn-gCFCrC-hasVerticalHeaderBorder-true c-bXzPNn-cezigA-isMultipleSelectionAllowed-false c-bXzPNn-guDxpg-backgroundColor-grey c-bXzPNn-joLkMp-align-center c-exMcQs-ldAXXo-isRowClickable-true c-kNzlbw-cezigA-isMultipleSelectionAllowed-false c-beGkFe-cddMLR-variant-secondary c-bXzPNn-HmsXy-align-right c-hWNBpN-kMhpXP-size-lg c-dckzdi-gipWcE-color-default c-beGkFe-KVdRe-size-large}@media{.c-jzzXej-FActp-size-large{width:var(--hr-spacing-08);height:var(--hr-spacing-08)}.c-jzzXej-RPEFT-color-dark{color:var(--hr-avatar-text-color-dark);background-color:var(--hr-avatar-background-color-dark)}.c-PJLV-kRctyV-spacing-24 > * + *{margin-top:var(--space-4)}.c-frhDCa-Kotlb-padding-24.c-frhDCa-Kotlb-padding-24{padding:var(--hr-spacing-06)}.c-frhDCa-ylZoY-background-light{background-color:var(--hr-neutral-0)}.c-beGkFe-eqbrNw-variant-ghost{color:var(--hr-button-text-color-ghost);background-color:var(--hr-button-background-color-ghost)}.c-beGkFe-eqbrNw-variant-ghost:hover{color:var(--hr-button-text-color-ghost-hover);background-color:var(--hr-button-background-color-ghost-hover)}.c-beGkFe-eqbrNw-variant-ghost[disabled],.c-beGkFe-eqbrNw-variant-ghost[aria-disabled="true"]{color:var(--hr-button-text-color-ghost-disabled);background-color:var(--hr-button-background-color-ghost-disabled)}.c-beGkFe-bwrheh-size-medium{height:2.25rem}.c-beGkFe-jRxxkV-isIconButton-true.c-beGkFe-jRxxkV-isIconButton-true{min-width:2.25rem;min-height:2.25rem;padding:0;font-size:var(--hr-spacing-05)}.c-PJLV-OtkJb-spacing-48 > * + *{margin-top:var(--space-6)}.c-frhDCa-htRqGB-variant-outlined{border:1px solid var(--hr-neutral-10)}.c-frhDCa-juwdIk-padding-48.c-frhDCa-juwdIk-padding-48{padding:var(--hr-spacing-09)}.c-dckzdi-ghnxRT-color-secondary{color:var(--hr-tag-text-color-secondary);background-color:var(--hr-tag-background-color-secondary)}.c-ivhXVM-krtRBm-isActive-true.c-ivhXVM-krtRBm-isActive-true{background-color:var(--hr-pagination-background-color-selected);border-color:var(--hr-pagination-border-color-selected);color:var(--hr-pagination-text-color-selected)}.c-ivhXVM-krtRBm-isActive-true.c-ivhXVM-krtRBm-isActive-true:hover{border-color:var(--hr-pagination-border-color-selected);color:var(--hr-pagination-text-color-selected)}.c-ivhXVM-fIlGbM-isEllipsis-true.c-ivhXVM-fIlGbM-isEllipsis-true:hover{border-color:var(--hr-pagination-border-color-default)}.c-dbqrOz-kPILiq-theme-light{background-color:var(--hr-neutral-10)}.c-gILCRn-ijooyE-hasStartAdornment-true.c-gILCRn-ijooyE-hasStartAdornment-true.c-gILCRn-ijooyE-hasStartAdornment-true{padding-left:var(--hr-spacing-08)}.c-gILCRn-gUIiUt-elementType-text{height:36px}.c-CeHAS-gLOLQa-align-left{position:absolute;margin-left:var(--hr-spacing-03)}.c-lnkmko-bRcXDr-underline-hover{text-decoration-line:none}.c-lnkmko-bRcXDr-underline-hover:hover{text-decoration-line:underline}.c-beGkFe-dshqME-variant-primary{background-color:var(--hr-button-background-color-primary);color:var(--hr-button-text-color)}.c-beGkFe-dshqME-variant-primary:hover{background-color:var(--hr-button-background-color-primary-hover)}.c-beGkFe-dshqME-variant-primary[disabled],.c-beGkFe-dshqME-variant-primary[aria-disabled="true"]{background-color:var(--hr-button-background-color-disabled);color:var(--hr-button-text-color-primary-disabled)}.c-bwHmro-jLrsjG-bgcolor-grey{background-color:var(--hr-neutral-5)}.c-bXzPNn-fMDQqx-align-left{text-align:left}.c-bXzPNn-gCFCrC-hasVerticalHeaderBorder-true{border-right:1px solid var(--hr-table-border-color)}.c-bXzPNn-gCFCrC-hasVerticalHeaderBorder-true:last-child{border-right:none}.c-bXzPNn-cezigA-isMultipleSelectionAllowed-false{left:0}.c-bXzPNn-guDxpg-backgroundColor-grey{background-color:var(--hr-table-header-background-color-grey)}.c-bXzPNn-joLkMp-align-center{text-align:center}.c-exMcQs-ldAXXo-isRowClickable-true:hover td{cursor:pointer}.c-exMcQs-ldAXXo-isRowClickable-true:hover td:not([data-table-cell-sticky]){background-color:var(--hr-table-row-color-hover)}.c-exMcQs-ldAXXo-isRowClickable-true:hover td[data-table-cell-sticky]:after{background-color:var(--hr-table-row-color-hover)}.c-kNzlbw-cezigA-isMultipleSelectionAllowed-false{left:0}.c-beGkFe-cddMLR-variant-secondary{background-color:var(--hr-button-background-color-secondary);color:var(--hr-button-text-color-secondary)}.c-beGkFe-cddMLR-variant-secondary.c-beGkFe-cddMLR-variant-secondary{border:1px solid var(--hr-button-border-color-secondary)}.c-beGkFe-cddMLR-variant-secondary:hover{background-color:var(--hr-button-background-color-secondary-hover);color:var(--hr-button-text-color-secondary-hover)}.c-beGkFe-cddMLR-variant-secondary[disabled],.c-beGkFe-cddMLR-variant-secondary[aria-disabled="true"]{background-color:var(--hr-button-background-color-secondary-disabled);color:var(--hr-button-text-color-secondary-disabled)}.c-beGkFe-cddMLR-variant-secondary[disabled].c-beGkFe-cddMLR-variant-secondary[disabled],.c-beGkFe-cddMLR-variant-secondary[aria-disabled="true"].c-beGkFe-cddMLR-variant-secondary[aria-disabled="true"]{border:1px solid var(--hr-button-border-color-secondary-disabled)}.c-bXzPNn-HmsXy-align-right{text-align:right}.c-hWNBpN-kMhpXP-size-lg{width:var(--sizes-5);height:var(--sizes-5)}.c-dckzdi-gipWcE-color-default{color:var(--hr-tag-text-color-default);background-color:var(--hr-tag-background-color-default)}.c-dckzdi-gipWcE-color-default[data-isdismissible=true]:hover{background-color:var(--hr-tag-background-color-default-hover)}.c-beGkFe-KVdRe-size-large{height:var(--hr-spacing-09)}}--sxs{--sxs:6 c-jzzXej-iPJLV-css c-bNIzaZ-iPJLV-css c-dbqrOz-iPJLV-css c-cmpvrW-iHneal-css c-lnkmko-ieYXijv-css c-kUdqAe-iPJLV-css c-lnkmko-ihbgFTv-css}@media{.c-cmpvrW-iHneal-css{width:304px;min-width:180px}.c-lnkmko-ieYXijv-css{color:#408cff}.c-lnkmko-ieYXijv-css:hover{color:#408cff}.c-lnkmko-ihbgFTv-css{color:var(--hr-anchor-text-color-default)}.c-lnkmko-ihbgFTv-css:hover{color:var(--hr-anchor-text-color-default)}}
    </style>
  

<style>
html.scroll-hidden,html.scroll-hidden body{
  overflow: hidden;
  height:100vh;
}
html.scroll-hidden.pad-adjustment body{
    padding-right : 17px;
}
html.scroll-hidden.pad-adjustment .fixed-elm{
    padding-right : 17px;
}</style><link rel="prefetch" href="./Strings _files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-de5fd791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-4e6f8e06.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-e0ed049e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_camelCase_js-node_modules_hr-util_es_react_set_inner_html_-8d8fec-7417d887.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-96cd3cd0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-669f78cb.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-8e0fd346.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-842fbbfc.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_js-0ab0ddcd.js"><link rel="prefetch" href="./Strings _files/hackerrank_r_challenge_list-b6e22c8f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge_list-2e0e9b11.js"><link rel="prefetch" href="./Strings _files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-de5fd791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-4e6f8e06.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-e0ed049e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_camelCase_js-node_modules_hr-util_es_react_set_inner_html_-8d8fec-7417d887.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-96cd3cd0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-669f78cb.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-8e0fd346.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-842fbbfc.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_js-0ab0ddcd.js"><link rel="prefetch" href="./Strings _files/hackerrank_r_challenge_list-b6e22c8f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge_list-2e0e9b11.js"><link rel="prefetch" href="./Strings _files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-de5fd791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-4e6f8e06.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-e0ed049e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_camelCase_js-node_modules_hr-util_es_react_set_inner_html_-8d8fec-7417d887.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-96cd3cd0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-669f78cb.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-8e0fd346.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-842fbbfc.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_js-0ab0ddcd.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge_list_v2-85ac5e53.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge_list_v2-38cb25e5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_forms_recaptcha_v3_js-node_modules_app-server-a5e17e-2b47cb4d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-simplemde-editor_lib_index_js-f8ba86e2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-581589ad.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_forum-86c7627f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_forum-3b11e2f8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_hr_monaco_editor_full_screen_button_j-cd6705-c88a6c8a.js"><link rel="prefetch" href="./Strings _files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-de5fd791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-4e6f8e06.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-fdef3e2f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-e0ed049e.js"><link rel="prefetch" href="./Strings _files/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-e795ce-493e22a8.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-e795ce-c7184db8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_comma-separated-tokens_index_js-node_modules_property-information-bb4f86-cc17183f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_throttle_js-node_modules_regenerator-runtime_runtime_js-717281e1.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hackerrank_tutor-bot_dist_esm_index_js-node_modules_ansi-to-react-c40a60-7bdf6061.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-f914b4ff.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-87f92ed4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-96cd3cd0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-581589ad.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-669f78cb.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-d4cef3bf.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_challenge-22b13516.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge-f8474ec0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-fdef3e2f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_editor_utils_js-node_modules_ui-kit_e-453337-7c9a77b5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-select_dist_react-select_css-node_modules_ui-kit_es_compone-5b3ddc-77d55314.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es6_string_link_js-node_modules_react-animate-hei-2972f6-b2bd1ac9.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-581589ad.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-d4cef3bf.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_leaderboard_leaderboard_js-src_shared_community_leaderboard_lead-0d850e-87c169a8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-3d1bbbe8.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-365bb193.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-fdef3e2f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_editor_utils_js-node_modules_ui-kit_e-453337-7c9a77b5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-select_dist_react-select_css-node_modules_ui-kit_es_compone-5b3ddc-77d55314.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-581589ad.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-d4cef3bf.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_leaderboard_leaderboard_js-src_shared_community_leaderboard_lead-0d850e-87c169a8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_leaderboardv2-21bd3ba2.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_leaderboardv2-3cc71201.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_hr_monaco_editor_full_screen_button_j-cd6705-c88a6c8a.js"><link rel="prefetch" href="./Strings _files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-de5fd791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-4e6f8e06.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-fdef3e2f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-e0ed049e.js"><link rel="prefetch" href="./Strings _files/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-e795ce-493e22a8.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-e795ce-c7184db8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_comma-separated-tokens_index_js-node_modules_property-information-bb4f86-cc17183f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_throttle_js-node_modules_regenerator-runtime_runtime_js-717281e1.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hackerrank_tutor-bot_dist_esm_index_js-node_modules_ansi-to-react-c40a60-7bdf6061.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-f914b4ff.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-87f92ed4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-96cd3cd0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-581589ad.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-669f78cb.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-d4cef3bf.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_challenge-22b13516.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge-f8474ec0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_hr_monaco_editor_full_screen_button_j-cd6705-c88a6c8a.js"><link rel="prefetch" href="./Strings _files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-de5fd791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-4e6f8e06.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-fdef3e2f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-e0ed049e.js"><link rel="prefetch" href="./Strings _files/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-e795ce-493e22a8.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-e795ce-c7184db8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_comma-separated-tokens_index_js-node_modules_property-information-bb4f86-cc17183f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_throttle_js-node_modules_regenerator-runtime_runtime_js-717281e1.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hackerrank_tutor-bot_dist_esm_index_js-node_modules_ansi-to-react-c40a60-7bdf6061.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-f914b4ff.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-87f92ed4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-96cd3cd0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-581589ad.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-669f78cb.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-d4cef3bf.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_challenge-22b13516.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge-f8474ec0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-fdef3e2f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_editor_utils_js-node_modules_ui-kit_e-453337-7c9a77b5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-select_dist_react-select_css-node_modules_ui-kit_es_compone-5b3ddc-77d55314.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es6_string_link_js-node_modules_react-animate-hei-2972f6-b2bd1ac9.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-581589ad.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-d4cef3bf.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_leaderboard_leaderboard_js-src_shared_community_leaderboard_lead-0d850e-87c169a8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-3d1bbbe8.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-365bb193.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-fdef3e2f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_editor_utils_js-node_modules_ui-kit_e-453337-7c9a77b5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-select_dist_react-select_css-node_modules_ui-kit_es_compone-5b3ddc-77d55314.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es6_string_link_js-node_modules_react-animate-hei-2972f6-b2bd1ac9.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-581589ad.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-d4cef3bf.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_leaderboard_leaderboard_js-src_shared_community_leaderboard_lead-0d850e-87c169a8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-3d1bbbe8.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-365bb193.js"><link rel="prefetch" href="./Strings _files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-de5fd791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-4e6f8e06.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-e0ed049e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_camelCase_js-node_modules_hr-util_es_react_set_inner_html_-8d8fec-7417d887.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-96cd3cd0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-669f78cb.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-8e0fd346.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-842fbbfc.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_js-0ab0ddcd.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge_list_v2-85ac5e53.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge_list_v2-38cb25e5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-fdef3e2f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_editor_utils_js-node_modules_ui-kit_e-453337-7c9a77b5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-select_dist_react-select_css-node_modules_ui-kit_es_compone-5b3ddc-77d55314.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es6_string_link_js-node_modules_react-animate-hei-2972f6-b2bd1ac9.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-581589ad.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-d4cef3bf.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_leaderboard_leaderboard_js-src_shared_community_leaderboard_lead-0d850e-87c169a8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-3d1bbbe8.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-365bb193.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_survey-776b42ff.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_survey-7f982d03.js"><link rel="prefetch" href="./Strings _files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-de5fd791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-4e6f8e06.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-e0ed049e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_camelCase_js-node_modules_hr-util_es_react_set_inner_html_-8d8fec-7417d887.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es6_string_link_js-node_modules_lodash_debounce_j-658e2c-65caaeaa.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-96cd3cd0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-669f78cb.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-8e0fd346.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-842fbbfc.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_js-0ab0ddcd.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_interview_v2_interview_mock_test_card_js-d3068280.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-99312128.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-14a9b32c.js"><link rel="prefetch" href="./Strings _files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-de5fd791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-4e6f8e06.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-e0ed049e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_camelCase_js-node_modules_hr-util_es_react_set_inner_html_-8d8fec-7417d887.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es6_string_link_js-node_modules_lodash_debounce_j-658e2c-65caaeaa.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-96cd3cd0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-669f78cb.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-8e0fd346.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-842fbbfc.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_js-0ab0ddcd.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_interview_v2_interview_mock_test_card_js-d3068280.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-99312128.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-14a9b32c.js"><link rel="prefetch" href="./Strings _files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-de5fd791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-4e6f8e06.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-e0ed049e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_camelCase_js-node_modules_hr-util_es_react_set_inner_html_-8d8fec-7417d887.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es6_string_link_js-node_modules_lodash_debounce_j-658e2c-65caaeaa.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-96cd3cd0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-669f78cb.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-8e0fd346.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-842fbbfc.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_js-0ab0ddcd.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_interview_v2_interview_mock_test_card_js-d3068280.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-99312128.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-14a9b32c.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_react_select_option_with_analytics_js-node_mo-c014b2-f2cc1838.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-sticky_lib_index_js-7078499d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-e94576e8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_phone_input_phone_input_js-src_shared_community_pro-22f740-3993deb7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_job_choose_hackerresume_dialog_js-src_shared_community_prof-8b9acb-04350fec.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-7a236791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-7fe33289.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_react_select_option_with_analytics_js-node_mo-c014b2-f2cc1838.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-sticky_lib_index_js-7078499d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-e94576e8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_phone_input_phone_input_js-src_shared_community_pro-22f740-3993deb7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_job_choose_hackerresume_dialog_js-src_shared_community_prof-8b9acb-04350fec.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-7a236791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-7fe33289.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_extension-fd367229.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_extension-a75277a1.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_react_select_option_with_analytics_js-node_mo-c014b2-f2cc1838.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-sticky_lib_index_js-7078499d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-e94576e8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_phone_input_phone_input_js-src_shared_community_pro-22f740-3993deb7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_job_choose_hackerresume_dialog_js-src_shared_community_prof-8b9acb-04350fec.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-7a236791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-7fe33289.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_react_select_option_with_analytics_js-node_mo-c014b2-f2cc1838.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-sticky_lib_index_js-7078499d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-e94576e8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_phone_input_phone_input_js-src_shared_community_pro-22f740-3993deb7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_job_choose_hackerresume_dialog_js-src_shared_community_prof-8b9acb-04350fec.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-7a236791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-7fe33289.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_react_select_option_with_analytics_js-node_mo-c014b2-f2cc1838.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-sticky_lib_index_js-7078499d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-e94576e8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_phone_input_phone_input_js-src_shared_community_pro-22f740-3993deb7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_job_choose_hackerresume_dialog_js-src_shared_community_prof-8b9acb-04350fec.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-7a236791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-7fe33289.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_react_select_option_with_analytics_js-node_mo-c014b2-f2cc1838.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-sticky_lib_index_js-7078499d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-e94576e8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_phone_input_phone_input_js-src_shared_community_pro-22f740-3993deb7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_job_choose_hackerresume_dialog_js-src_shared_community_prof-8b9acb-04350fec.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-7a236791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-7fe33289.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_CheckCircle_-2fc6f6-b481911b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_react_prefetch_js-node_modules_hr-util_es_react_use_copy_to_c-f9b20e-a1f07695.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_jspdf_dist_jspdf_es_min_js-c441fe25.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_copy-to-clipboard_index_js-node_modules_core-js_modules_es6_strin-2d70dd-9ded4fa7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-96cd3cd0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-e94576e8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-4ee1eee5.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-fc6b1c0a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-ec121c1f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-b7842b22.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_CheckCircle_-2fc6f6-b481911b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_react_prefetch_js-node_modules_hr-util_es_react_use_copy_to_c-f9b20e-a1f07695.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_jspdf_dist_jspdf_es_min_js-c441fe25.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_copy-to-clipboard_index_js-node_modules_core-js_modules_es6_strin-2d70dd-9ded4fa7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-96cd3cd0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-e94576e8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-4ee1eee5.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-fc6b1c0a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-ec121c1f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-b7842b22.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_CheckCircle_-2fc6f6-b481911b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_react_prefetch_js-node_modules_hr-util_es_react_use_copy_to_c-f9b20e-a1f07695.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_jspdf_dist_jspdf_es_min_js-c441fe25.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_copy-to-clipboard_index_js-node_modules_core-js_modules_es6_strin-2d70dd-9ded4fa7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-96cd3cd0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-e94576e8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-4ee1eee5.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-fc6b1c0a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-ec121c1f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-b7842b22.js"><link rel="prefetch" href="./Strings _files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-de5fd791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_react_select_option_with_analytics_js-node_mo-96e9e7-97084554.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_omit_js-node_modules_match-rules_lib_match_rules_js-node_m-862daf-dcffe780.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-e94576e8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_phone_input_phone_input_js-src_shared_community_pro-22f740-3993deb7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-4ee1eee5.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-fc6b1c0a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_profile_controls_upload_resume_v2_js-src_shared_community_profil-7e259a-75557c1b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification_test-0ebced06.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification_test-ae59e73e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_mock_tests-0161cc8e.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_mock_tests-3931143a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_mock_tests_perf-8c5b220b.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_mock_tests_perf-43c9d732.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_dashboard_cards_email_verification_card_js-src_shared_community_-7d12ac-4fcc3d13.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_dashboard_v2-2b4d022b.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_react_prefetch_js-node_modules_ui-icons_es_ui_icons_Clipboard-6792cc-df003806.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-e94576e8.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_dashboard_cards_email_verification_card_js-src_shared_community_-7d12ac-4fcc3d13.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_dashboard-5308c262.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_dashboard-56d93d1a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-fdef3e2f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_editor_utils_js-node_modules_ui-kit_e-453337-7c9a77b5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-select_dist_react-select_css-node_modules_ui-kit_es_compone-5b3ddc-77d55314.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-581589ad.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-d4cef3bf.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_leaderboard_leaderboard_js-src_shared_community_leaderboard_lead-0d850e-87c169a8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_leaderboard-017b4df8.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_leaderboard-24557916.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_intersection_observer-763a044c.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_es_index_js-b53dca2f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_es_index_js-4584daf4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_CheckCircle_-2fc6f6-b481911b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_feedback_feedback_js-node_modules_app-server_-5437cb-8538a2c0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_comma-separated-tokens_index_js-node_modules_property-information-bb4f86-cc17183f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hast-util-parse-selector_index_js-node_modules_is-alphanumerical_-e01f08-cc302d7f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-dnd-html5-backend_lib_index_js-node_modules_react-dnd_lib_i-9d3f76-0087a791.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_debounce_js-node_modules_lodash_omit_js-d18ad94a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-image-crop_dist_ReactCrop_js-444aa972.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_shared-components_node_modules_react-diff-view_style_index_css-no-064b18-38774a09.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_shared-components_node_modules_react-diff-view_style_index_css-no-064b18-c5da6f5b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es6_string_link_js-node_modules_country-flags-svg-246916-5c64d8f2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-96cd3cd0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_phone_input_phone_input_js-src_shared_community_pro-22f740-3993deb7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_profile_controls_upload_resume_v2_js-src_shared_community_profil-7e259a-75557c1b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_job_choose_hackerresume_dialog_js-src_shared_community_prof-8b9acb-04350fec.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_profile_v2-06bae43a.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_profile_v2-e4b6daef.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_onboarding_survey-a8cf200a.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_onboarding_survey-3812b2d7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_highcharts_highcharts_js-8e5fcb13.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_charts-e7f87161.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_charts-58f26b05.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_highcharts_highcharts_js-8e5fcb13.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_charts-e7f87161.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_charts-58f26b05.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_scoring-3155357c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_scoring-3a311736.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_scoring-3155357c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_scoring-3a311736.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-4e6f8e06.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_debounce_js-node_modules_hr-util_es_react_set_inner_html_j-58877a-71423b93.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-669f78cb.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-8e0fd346.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-842fbbfc.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_interview_v2_interview_mock_test_card_js-d3068280.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview_v2-0f0664f2.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview_v2-db64b8dd.js"><link rel="prefetch" href="./Strings _files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-de5fd791.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-4e6f8e06.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-e0ed049e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_camelCase_js-node_modules_hr-util_es_react_set_inner_html_-8d8fec-7417d887.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es6_string_link_js-node_modules_lodash_debounce_j-658e2c-65caaeaa.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-96cd3cd0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-669f78cb.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-8e0fd346.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-842fbbfc.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_js-0ab0ddcd.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_interview_v2_interview_mock_test_card_js-d3068280.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-99312128.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-14a9b32c.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-4e6f8e06.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_debounce_js-node_modules_hr-util_es_react_set_inner_html_j-58877a-71423b93.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-669f78cb.js"><link rel="prefetch" href="./Strings _files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-8e0fd346.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-842fbbfc.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_interview_v2_interview_mock_test_card_js-d3068280.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview_v2-0f0664f2.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview_v2-db64b8dd.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_CheckCircle_-2fc6f6-b481911b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_react_prefetch_js-node_modules_hr-util_es_react_use_copy_to_c-f9b20e-a1f07695.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_jspdf_dist_jspdf_es_min_js-c441fe25.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_copy-to-clipboard_index_js-node_modules_core-js_modules_es6_strin-2d70dd-9ded4fa7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-96cd3cd0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-e94576e8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-4ee1eee5.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-fc6b1c0a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-ec121c1f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-b7842b22.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_CheckCircle_-2fc6f6-b481911b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_react_prefetch_js-node_modules_hr-util_es_react_use_copy_to_c-f9b20e-a1f07695.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_jspdf_dist_jspdf_es_min_js-c441fe25.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_copy-to-clipboard_index_js-node_modules_core-js_modules_es6_strin-2d70dd-9ded4fa7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-96cd3cd0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-e94576e8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-4ee1eee5.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-fc6b1c0a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-ec121c1f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-b7842b22.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_form-alert_node_modules_core-js_modules_es6_array_iter-ea8ced-6f72c745.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-image-crop_dist_ReactCrop_js-444aa972.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hackerrank_hrds_es_stitches_config_js-node_modules_core-js_module-b8ad86-84b150df.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_map_js-node_modules_pusher-js_dist_web_pusher_js-e9772b0e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_shared-components_upload_node_modules_core-js_modules__add-to-uns-3de0c4-0fb364ea.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_work_common_components_invite_invite_actions_js-src_shared_work_util_user_-2d7b67-fe9127c0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_work_teams_teams_util_js-cd53b1d4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_admin-57939d7c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_admin-9008c310.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_form-alert_node_modules_core-js_modules_es6_array_iter-ea8ced-6f72c745.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-image-crop_dist_ReactCrop_js-444aa972.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hackerrank_hrds_es_stitches_config_js-node_modules_core-js_module-b8ad86-84b150df.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_map_js-node_modules_pusher-js_dist_web_pusher_js-e9772b0e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_shared-components_upload_node_modules_core-js_modules__add-to-uns-3de0c4-0fb364ea.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_work_common_components_invite_invite_actions_js-src_shared_work_util_user_-2d7b67-fe9127c0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_work_teams_teams_util_js-cd53b1d4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_admin-57939d7c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_admin-9008c310.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_form-alert_node_modules_core-js_modules_es6_array_iter-ea8ced-6f72c745.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-image-crop_dist_ReactCrop_js-444aa972.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hackerrank_hrds_es_stitches_config_js-node_modules_core-js_module-b8ad86-84b150df.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_map_js-node_modules_pusher-js_dist_web_pusher_js-e9772b0e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_shared-components_upload_node_modules_core-js_modules__add-to-uns-3de0c4-0fb364ea.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_work_common_components_invite_invite_actions_js-src_shared_work_util_user_-2d7b67-fe9127c0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_work_teams_teams_util_js-cd53b1d4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_admin-57939d7c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_admin-9008c310.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_omit_js-node_modules_hr-util_es_react_set_inner_html_js-no-ad9cb7-ed273c21.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_omit_js-node_modules_hr-util_es_react_set_inner_html_js-no-ad9cb7-a72328ad.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_directory-ae8f4ac0.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_directory-b298041b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_omit_js-node_modules_hr-util_es_react_set_inner_html_js-no-ad9cb7-ed273c21.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_omit_js-node_modules_hr-util_es_react_set_inner_html_js-no-ad9cb7-a72328ad.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_directory-ae8f4ac0.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_directory-b298041b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_omit_js-node_modules_hr-util_es_react_set_inner_html_js-no-ad9cb7-ed273c21.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_omit_js-node_modules_hr-util_es_react_set_inner_html_js-no-ad9cb7-a72328ad.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_directory-ae8f4ac0.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_directory-b298041b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_auth-c6795fdd.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_auth-10e7c257.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_submissions-c39c36e2.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_submissions-20e3738b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_administration_contests-d3f020be.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_administration_contests-3cc5d7d5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_administration_contests-d3f020be.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_administration_contests-3cc5d7d5.js"><link rel="prefetch" href="./Strings _files/modules-node_modules_app-server_es_ui_component_editors_hr_monaco_editor_utils_js-node_module-d266c7-30091330.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_hr_monaco_editor_utils_js-node_module-d266c7-1c806baf.js"><link rel="prefetch" href="./Strings _files/defaultVendors-include-loader_node_modules_monaco-editor_esm_vs_editor_editor_main_js-039ff055.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-include-loader_node_modules_monaco-editor_esm_vs_editor_editor_main_js-4eb10a1a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_krackjack-cb796035.js"><link rel="stylesheet" type="text/css" href="./Strings _files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-de5fd791.css"><link rel="stylesheet" type="text/css" href="./Strings _files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-8e0fd346.css"><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_challenge_list-b6e22c8f.css"><link rel="stylesheet" type="text/css" href="./Strings _files/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-e795ce-493e22a8.css"><link rel="stylesheet" type="text/css" href="./Strings _files/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-f914b4ff.css"><link rel="stylesheet" type="text/css" href="./Strings _files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-d4cef3bf.css"><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_challenge-22b13516.css"><link rel="prefetch" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_hr_monaco_editor_utils_js-node_module-d266c7-1c806baf.js"><link rel="prefetch" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-include-loader_node_modules_monaco-editor_esm_vs_editor_editor_main_js-4eb10a1a.js"><link rel="prefetch" as="script" href="https://hrcdn.net/fcore/assets/hackerrank_r_krackjack-cb796035.js"><style id="38dc4e926f668f49ff19c932acf4b1a792ed2eff13749f6bc7b33af06b5feced">._chatMessage_ezakj_1 {
  width: fit-content;
  max-width: 80%;
  margin-top: var(--hr-spacing-01);
  margin-bottom: var(--hr-spacing-01);
  padding: var(--hr-spacing-03);
  line-height: var(--hr-spacing-05);
}

._chatMessage_ezakj_1 p {
  margin: 0;
  font-size: 14px;
}

._chatMessage_ezakj_1 pre {
  padding: var(--hr-spacing-02);
  white-space: pre-wrap;
  font-family: 'Source Code Pro', monospace;
  font-size: 14px;
  font-style: normal;
  line-height: var(--hr-spacing-05);
  background-color: var(--aiAssistant-chatMessage-codeBlock-bgColor);
  border-radius: var(--hr-spacing-01);
  margin: var(--hr-spacing-02) 0 !important;
}

._chatMessage_ezakj_1 ol,
._chatMessage_ezakj_1 ul {
  display: block !important;
  list-style-type: decimal !important;
  margin-block-start: 1em !important;
  margin-block-end: 1em !important;
  margin-inline-start: 0px !important;
  margin-inline-end: 0px !important;
  padding-inline-start: 40px !important;
}

._chatMessage_ezakj_1._user_ezakj_38 {
  border-radius: var(--hr-spacing-02) var(--hr-spacing-02) 0px var(--hr-spacing-02);
  color: var(--aiAssistant-chatMessage-user-color);
  background: var(--aiAssistant-chatMessage-user-bgColor);
  margin-left: auto;
}

._chatMessage_ezakj_1._user_ezakj_38 pre {
  background-color: var(--aiAssistant-chatMessage-codeBlock-bgColor);
  color: var(--aiAssistant-chatMessage-codeBlock-color);
}

._chatMessage_ezakj_1._bot_ezakj_50 {
  border-radius: 0px var(--hr-spacing-02) var(--hr-spacing-02) var(--hr-spacing-02);
  color: var(--aiAssistant-chatMessage-bot-color);
  background: var(--aiAssistant-chatMessage-bot-bgColor);
}

._chatMessage_ezakj_1._suggestion_ezakj_56 {
  cursor: pointer;
  /* margin-top: var(--hr-spacing-03); */
  /* 4px margin already exists in .chatMessage class */
  /* margin-bottom: var(--hr-spacing-03); */
  /* 4px margin already exists in .chatMessage class */
  border-radius: var(--hr-spacing-04);
  background-color: transparent;
  border: 1px solid var(--aiAssistant-chatMessage-suggestion-borderColor);
  color: var(--aiAssistant-chatMessage-suggestion-color);

  &:hover {
    background-color: var(--aiAssistant-chatMessage-suggestion-hover-backgroundColor);
  }
}

._chatMessage_ezakj_1._codeblock_ezakj_72 {
  white-space: pre-wrap;
  padding: var(--hr-spacing-05);
  border-radius: 0px var(--hr-spacing-02) var(--hr-spacing-02) var(--hr-spacing-02);
  background-color: var(--aiAssistant-chatMessage-codeBlock-bgColor);
  color: var(--aiAssistant-chatMessage-codeBlock-color);
  font-family: 'Source Code Pro', monospace;
  font-size: 14px;
  font-style: normal;
  line-height: var(--hr-spacing-05);
}

._chatMessage_ezakj_1._fadeIn_ezakj_84 {
  animation: _fadeIn_ezakj_84 0.5s ease-in-out;
}

._chatMessage_ezakj_1._fadeOut_ezakj_88 {
  animation: _fadeOut_ezakj_88 0.5s ease-in-out;
}

._chatMessage_ezakj_1._messageGroupEnded_ezakj_92 {
  margin-top: var(--hr-spacing-02);
  /* 4px margin already exists in .chatMessage class */
  margin-bottom: var(--hr-spacing-02);
  /* 4px margin already exists in .chatMessage class */
}

@media (max-width: 1440px) {
  ._chatMessage_ezakj_1 {
    max-width: 90%;
    padding: var(--hr-spacing-02);
  }

  ._chatMessage_ezakj_1 p {
    margin: 0;
    font-size: small;
  }

  ._chatMessage_ezakj_1 pre {
    font-size: 12px;
    line-height: var(--hr-spacing-04);
    padding: var(--hr-spacing-02);
    margin: var(--hr-spacing-02) 0 !important;
  }
}

@media (max-width: 1024px) {
  ._chatMessage_ezakj_1 {
    max-width: 90%;
    padding: var(--hr-spacing-02);
  }

  ._chatMessage_ezakj_1 p {
    margin: 0;
    font-size: smaller;
  }

  ._chatMessage_ezakj_1 pre {
    font-size: 12px;
    line-height: var(--hr-spacing-04);
    padding: var(--hr-spacing-02);
  }
}</style><style id="ecb2d6f528035435a887963b24dbc7e2d67511cc15106c549ab1a698ef1a93dc">._multipleMessagesContainer_1bqp9_1 {
  display: flex;
  justify-content: flex-end;
  max-width: 80%;
  margin-left: auto;
  margin-top: var(--hr-spacing-02);
  margin-bottom: var(--hr-spacing-02);
  gap: 10px;
  flex-wrap: nowrap;
}

@media screen and (max-width: 1440px) {
  ._multipleMessagesContainer_1bqp9_1 {
    max-width: 90%;
    margin-bottom: 0;
  }
}

@media (max-width: 1024px) {
  ._multipleMessagesContainer_1bqp9_1 {
    max-width: 90%;
    flex-wrap: wrap;
    gap: 2px;
    margin-bottom: 0;
  }
}</style><style id="b0a53220f689af23ba9b3ba31fccde61c0e1cf8b12cb15e974e24fd83dda4b02">._chatPanel_wtu34_1 {
  flex: 1 1 0%;
  background-color: var(--aiAssistant-chatPanel-bgColor);
  color: var(--aiAssistant-chatPanel-color);
  transition: height 400ms ease-in-out;
}

._messageListContainer_wtu34_8 {
  padding: var(--hr-spacing-06) var(--hr-spacing-08);
}

._userInputContainer_wtu34_12 {
  padding: var(--hr-spacing-06) var(--hr-spacing-08);
  background-color: var(--aiAssistant-userInputContainer-bgColor);
}

@media (max-width: 1440px) {
  ._messageListContainer_wtu34_8 {
    padding: var(--hr-spacing-02) var(--hr-spacing-04);
  }

  ._userInputContainer_wtu34_12 {
    padding: var(--hr-spacing-02) var(--hr-spacing-04) var(--hr-spacing-03) var(--hr-spacing-04);
  }
}

@media (max-width: 1024px) {
  ._messageListContainer_wtu34_8 {
    padding: var(--hr-spacing-02) var(--hr-spacing-04);
  }

  ._userInputContainer_wtu34_12 {
    padding: var(--hr-spacing-02) var(--hr-spacing-04) var(--hr-spacing-03) var(--hr-spacing-04);
  }
}</style><style id="04de0351d98aac77eaa6741dd63d193dc61a33cc7810cf085ffd304351bb232d">._botTextArea_1a8ob_1 {
  padding: var(--hr-spacing-02);
  border-radius: 8px;
  background-color: var(--aiAssistant-textArea-bgColor);
  border: 1px solid var(--aiAssistant-textArea-borderColor);
  color: var(--aiAssistant-textArea-color);
  resize: none;

  &:focus,
  &:focus-visible,
  &:focus-within {
    outline: none;
  }
}
</style><style id="245e695de00748cd7d72f4a0116beba68d28212c639dd7ad205188500bcc3e8a">._sendIcon_1egn0_1 {
  line-height: 0;
  margin-left: -1.8rem;
  margin-bottom: 0.8rem;
}

._sendIcon_1egn0_1 svg {
  transition: opacity 0.3s;
}

._opacity025_1egn0_11 svg {
  opacity: 0.25;
}

._opacity075_1egn0_15 svg {
  opacity: 0.75;
}

._loadingIcon_1egn0_19 {
  line-height: 0;
  margin-left: -1.8rem;
  margin-bottom: 0.8rem;
}</style><style id="468843275c780dd24c18bd390ae781b2d2e647179de46f6b108e396f000e3226">._tutorbotHeader_1k2om_1 {
  height: 58px;
  background-color: var(--aiAssistant-header-bgColor);
  color: var(--aiAssistant-header-color);
  border-top: 1px solid var(--aiAssistant-header-borderColor);
  border-bottom: 1px solid var(--aiAssistant-header-borderColor);
}

._tutorbotHeader_1k2om_1::before {
  content: '';
  position: absolute;
  top: calc(100% - 58px);
  left: -100%;
  width: 66%;
  height: 100%;
  background: linear-gradient(to right,
      var(--aiAssistant-header-shineColor) 0%,
      var(--aiAssistant-header-shineColor) 100%);
  animation: _shine_1k2om_1 3s;
  animation-delay: 2s;
}

._tutorbotHeader_1k2om_1._cancelShineAnimation_1k2om_23::before {
  animation: none;
}

@keyframes _shine_1k2om_1 {
  0% {
    transform: translateX(-100%) skew(-40deg) scaleX(0.03);
    opacity: 0;
  }

  50% {
    opacity: var(--aiAssistant-header-shineOpacity);
  }

  100% {
    transform: translateX(150%) skew(-40deg) scaleX(0.03);
    opacity: 0;
  }
}

._logoContainer_1k2om_43 {
  display: flex;
  align-content: center;
  justify-content: center;
  align-items: center;
  height: 40px;
  width: 40px;
  border-radius: 50%;
  border: 1px solid var(--aiAssistant-logo-borderColor);
  background-color: var(--aiAssistant-logo-bgColor);
}
</style><style id="93ec7b7920927f46f6c3953a8a38f698aa69a82c1afc623a2c078f1dc4534e20">.aiAssistant-cursorPointer {
  cursor: pointer;
}

*,
*::before,
*::after {
  box-sizing: border-box;
}

.aiAssistant-darkTheme {
  /* TextArea */
  --aiAssistant-textArea-color: var(--hr-neutral-0);
  --aiAssistant-textArea-borderColor: var(--hr-neutral-80);
  --aiAssistant-textArea-bgColor: var(--hr-neutral-80);

  /* UserInputContainer */
  --aiAssistant-userInputContainer-bgColor: var(--hr-neutral-90);

  /* Header */
  --aiAssistant-header-color: var(--hr-neutral-0);
  --aiAssistant-header-bgColor: #0e141e;
  --aiAssistant-header-borderColor: var(--hr-neutral-70);
  --aiAssistant-header-shineColor: #D9D9D9;
  --aiAssistant-header-shineOpacity: 0.2;

  /* Logo */
  --aiAssistant-logo-bgColor: var(--hr-neutral-90);
  --aiAssistant-logo-borderColor: var(--hr-neutral-70);

  /* ChatPanel */
  --aiAssistant-chatPanel-color: var(--hr-neutral-0);
  --aiAssistant-chatPanel-bgColor: var(--hr-neutral-90);

  /* ChatMessage */
  --aiAssistant-chatMessage-bot-color: var(--hr-neutral-0);
  --aiAssistant-chatMessage-bot-bgColor: #1d2432;
  --aiAssistant-chatMessage-user-color: var(--hr-neutral-90);
  --aiAssistant-chatMessage-user-bgColor: var(--hr-neutral-30);
  --aiAssistant-chatMessage-suggestion-color: var(--hr-blue-40);
  --aiAssistant-chatMessage-suggestion-borderColor: var(--hr-blue-40);
  --aiAssistant-chatMessage-suggestion-hover-backgroundColor: var(--hr-blue-90);
  --aiAssistant-chatMessage-codeBlock-color: var(--hr-blue-10);
  --aiAssistant-chatMessage-codeBlock-bgColor: var(--hr-neutral-90);
  --aiAssistant-chatMessage-codeBlock-copyCode-color: var(--hr-neutral-0);
  --aiAssistant-chatMessage-codeBlock-copyCode-borderColor: var(--hr-neutral-0);
}

.aiAssistant-lightTheme {
  /* TextArea */
  --aiAssistant-textArea-color: var(--hr-neutral-70);
  --aiAssistant-textArea-borderColor: var(--hr-neutral-20);
  --aiAssistant-textArea-bgColor: var(--hr-neutral-5);

  /* UserInputContainer */
  --aiAssistant-userInputContainer-bgColor: var(--hr-neutral-0);

  /* Header */
  --aiAssistant-header-color: var(--hr-neutral-70);
  --aiAssistant-header-bgColor: var(--hr-neutral-5);
  --aiAssistant-header-borderColor: var(--hr-neutral-30);
  --aiAssistant-header-shineColor: #FFF;
  --aiAssistant-header-shineOpacity: 0.3;

  /* Logo */
  --aiAssistant-logo-bgColor: var(--hr-neutral-0);
  --aiAssistant-logo-borderColor: var(--hr-neutral-30);

  /* ChatPanel */
  --aiAssistant-chatPanel-color: var(--hr-neutral-70);
  --aiAssistant-chatPanel-bgColor: var(--hr-neutral-0);

  /* ChatMessage */
  --aiAssistant-chatMessage-bot-color: var(--hr-neutral-70);
  --aiAssistant-chatMessage-bot-bgColor: var(--hr-neutral-5);
  --aiAssistant-chatMessage-user-color: var(--hr-neutral-0);
  --aiAssistant-chatMessage-user-bgColor: var(--hr-neutral-70);
  --aiAssistant-chatMessage-suggestion-color: var(--hr-blue-60);
  --aiAssistant-chatMessage-suggestion-borderColor: var(--hr-blue-60);
  --aiAssistant-chatMessage-suggestion-hover-backgroundColor: var(--hr-blue-10);
  --aiAssistant-chatMessage-codeBlock-color: var(--hr-neutral-70);
  --aiAssistant-chatMessage-codeBlock-bgColor: var(--hr-neutral-0);
  --aiAssistant-chatMessage-codeBlock-copyCode-color: var(--hr-neutral-70);
  --aiAssistant-chatMessage-codeBlock-copyCode-borderColor: var(--hr-neutral-70);
}</style><link rel="stylesheet" type="text/css" href="./Strings _files/modules-node_modules_app-server_es_ui_component_editors_hr_monaco_editor_utils_js-node_module-d266c7-30091330.css"><link rel="stylesheet" type="text/css" href="./Strings _files/defaultVendors-include-loader_node_modules_monaco-editor_esm_vs_editor_editor_main_js-039ff055.css"><style type="text/css" media="screen" class="monaco-colors">.codicon-add:before { content: '\ea60'; }
.codicon-plus:before { content: '\ea60'; }
.codicon-gist-new:before { content: '\ea60'; }
.codicon-repo-create:before { content: '\ea60'; }
.codicon-lightbulb:before { content: '\ea61'; }
.codicon-light-bulb:before { content: '\ea61'; }
.codicon-repo:before { content: '\ea62'; }
.codicon-repo-delete:before { content: '\ea62'; }
.codicon-gist-fork:before { content: '\ea63'; }
.codicon-repo-forked:before { content: '\ea63'; }
.codicon-git-pull-request:before { content: '\ea64'; }
.codicon-git-pull-request-abandoned:before { content: '\ea64'; }
.codicon-record-keys:before { content: '\ea65'; }
.codicon-keyboard:before { content: '\ea65'; }
.codicon-tag:before { content: '\ea66'; }
.codicon-tag-add:before { content: '\ea66'; }
.codicon-tag-remove:before { content: '\ea66'; }
.codicon-person:before { content: '\ea67'; }
.codicon-person-follow:before { content: '\ea67'; }
.codicon-person-outline:before { content: '\ea67'; }
.codicon-person-filled:before { content: '\ea67'; }
.codicon-git-branch:before { content: '\ea68'; }
.codicon-git-branch-create:before { content: '\ea68'; }
.codicon-git-branch-delete:before { content: '\ea68'; }
.codicon-source-control:before { content: '\ea68'; }
.codicon-mirror:before { content: '\ea69'; }
.codicon-mirror-public:before { content: '\ea69'; }
.codicon-star:before { content: '\ea6a'; }
.codicon-star-add:before { content: '\ea6a'; }
.codicon-star-delete:before { content: '\ea6a'; }
.codicon-star-empty:before { content: '\ea6a'; }
.codicon-comment:before { content: '\ea6b'; }
.codicon-comment-add:before { content: '\ea6b'; }
.codicon-alert:before { content: '\ea6c'; }
.codicon-warning:before { content: '\ea6c'; }
.codicon-search:before { content: '\ea6d'; }
.codicon-search-save:before { content: '\ea6d'; }
.codicon-log-out:before { content: '\ea6e'; }
.codicon-sign-out:before { content: '\ea6e'; }
.codicon-log-in:before { content: '\ea6f'; }
.codicon-sign-in:before { content: '\ea6f'; }
.codicon-eye:before { content: '\ea70'; }
.codicon-eye-unwatch:before { content: '\ea70'; }
.codicon-eye-watch:before { content: '\ea70'; }
.codicon-circle-filled:before { content: '\ea71'; }
.codicon-primitive-dot:before { content: '\ea71'; }
.codicon-close-dirty:before { content: '\ea71'; }
.codicon-debug-breakpoint:before { content: '\ea71'; }
.codicon-debug-breakpoint-disabled:before { content: '\ea71'; }
.codicon-debug-hint:before { content: '\ea71'; }
.codicon-primitive-square:before { content: '\ea72'; }
.codicon-edit:before { content: '\ea73'; }
.codicon-pencil:before { content: '\ea73'; }
.codicon-info:before { content: '\ea74'; }
.codicon-issue-opened:before { content: '\ea74'; }
.codicon-gist-private:before { content: '\ea75'; }
.codicon-git-fork-private:before { content: '\ea75'; }
.codicon-lock:before { content: '\ea75'; }
.codicon-mirror-private:before { content: '\ea75'; }
.codicon-close:before { content: '\ea76'; }
.codicon-remove-close:before { content: '\ea76'; }
.codicon-x:before { content: '\ea76'; }
.codicon-repo-sync:before { content: '\ea77'; }
.codicon-sync:before { content: '\ea77'; }
.codicon-clone:before { content: '\ea78'; }
.codicon-desktop-download:before { content: '\ea78'; }
.codicon-beaker:before { content: '\ea79'; }
.codicon-microscope:before { content: '\ea79'; }
.codicon-vm:before { content: '\ea7a'; }
.codicon-device-desktop:before { content: '\ea7a'; }
.codicon-file:before { content: '\ea7b'; }
.codicon-file-text:before { content: '\ea7b'; }
.codicon-more:before { content: '\ea7c'; }
.codicon-ellipsis:before { content: '\ea7c'; }
.codicon-kebab-horizontal:before { content: '\ea7c'; }
.codicon-mail-reply:before { content: '\ea7d'; }
.codicon-reply:before { content: '\ea7d'; }
.codicon-organization:before { content: '\ea7e'; }
.codicon-organization-filled:before { content: '\ea7e'; }
.codicon-organization-outline:before { content: '\ea7e'; }
.codicon-new-file:before { content: '\ea7f'; }
.codicon-file-add:before { content: '\ea7f'; }
.codicon-new-folder:before { content: '\ea80'; }
.codicon-file-directory-create:before { content: '\ea80'; }
.codicon-trash:before { content: '\ea81'; }
.codicon-trashcan:before { content: '\ea81'; }
.codicon-history:before { content: '\ea82'; }
.codicon-clock:before { content: '\ea82'; }
.codicon-folder:before { content: '\ea83'; }
.codicon-file-directory:before { content: '\ea83'; }
.codicon-symbol-folder:before { content: '\ea83'; }
.codicon-logo-github:before { content: '\ea84'; }
.codicon-mark-github:before { content: '\ea84'; }
.codicon-github:before { content: '\ea84'; }
.codicon-terminal:before { content: '\ea85'; }
.codicon-console:before { content: '\ea85'; }
.codicon-repl:before { content: '\ea85'; }
.codicon-zap:before { content: '\ea86'; }
.codicon-symbol-event:before { content: '\ea86'; }
.codicon-error:before { content: '\ea87'; }
.codicon-stop:before { content: '\ea87'; }
.codicon-variable:before { content: '\ea88'; }
.codicon-symbol-variable:before { content: '\ea88'; }
.codicon-array:before { content: '\ea8a'; }
.codicon-symbol-array:before { content: '\ea8a'; }
.codicon-symbol-module:before { content: '\ea8b'; }
.codicon-symbol-package:before { content: '\ea8b'; }
.codicon-symbol-namespace:before { content: '\ea8b'; }
.codicon-symbol-object:before { content: '\ea8b'; }
.codicon-symbol-method:before { content: '\ea8c'; }
.codicon-symbol-function:before { content: '\ea8c'; }
.codicon-symbol-constructor:before { content: '\ea8c'; }
.codicon-symbol-boolean:before { content: '\ea8f'; }
.codicon-symbol-null:before { content: '\ea8f'; }
.codicon-symbol-numeric:before { content: '\ea90'; }
.codicon-symbol-number:before { content: '\ea90'; }
.codicon-symbol-structure:before { content: '\ea91'; }
.codicon-symbol-struct:before { content: '\ea91'; }
.codicon-symbol-parameter:before { content: '\ea92'; }
.codicon-symbol-type-parameter:before { content: '\ea92'; }
.codicon-symbol-key:before { content: '\ea93'; }
.codicon-symbol-text:before { content: '\ea93'; }
.codicon-symbol-reference:before { content: '\ea94'; }
.codicon-go-to-file:before { content: '\ea94'; }
.codicon-symbol-enum:before { content: '\ea95'; }
.codicon-symbol-value:before { content: '\ea95'; }
.codicon-symbol-ruler:before { content: '\ea96'; }
.codicon-symbol-unit:before { content: '\ea96'; }
.codicon-activate-breakpoints:before { content: '\ea97'; }
.codicon-archive:before { content: '\ea98'; }
.codicon-arrow-both:before { content: '\ea99'; }
.codicon-arrow-down:before { content: '\ea9a'; }
.codicon-arrow-left:before { content: '\ea9b'; }
.codicon-arrow-right:before { content: '\ea9c'; }
.codicon-arrow-small-down:before { content: '\ea9d'; }
.codicon-arrow-small-left:before { content: '\ea9e'; }
.codicon-arrow-small-right:before { content: '\ea9f'; }
.codicon-arrow-small-up:before { content: '\eaa0'; }
.codicon-arrow-up:before { content: '\eaa1'; }
.codicon-bell:before { content: '\eaa2'; }
.codicon-bold:before { content: '\eaa3'; }
.codicon-book:before { content: '\eaa4'; }
.codicon-bookmark:before { content: '\eaa5'; }
.codicon-debug-breakpoint-conditional-unverified:before { content: '\eaa6'; }
.codicon-debug-breakpoint-conditional:before { content: '\eaa7'; }
.codicon-debug-breakpoint-conditional-disabled:before { content: '\eaa7'; }
.codicon-debug-breakpoint-data-unverified:before { content: '\eaa8'; }
.codicon-debug-breakpoint-data:before { content: '\eaa9'; }
.codicon-debug-breakpoint-data-disabled:before { content: '\eaa9'; }
.codicon-debug-breakpoint-log-unverified:before { content: '\eaaa'; }
.codicon-debug-breakpoint-log:before { content: '\eaab'; }
.codicon-debug-breakpoint-log-disabled:before { content: '\eaab'; }
.codicon-briefcase:before { content: '\eaac'; }
.codicon-broadcast:before { content: '\eaad'; }
.codicon-browser:before { content: '\eaae'; }
.codicon-bug:before { content: '\eaaf'; }
.codicon-calendar:before { content: '\eab0'; }
.codicon-case-sensitive:before { content: '\eab1'; }
.codicon-check:before { content: '\eab2'; }
.codicon-checklist:before { content: '\eab3'; }
.codicon-chevron-down:before { content: '\eab4'; }
.codicon-chevron-left:before { content: '\eab5'; }
.codicon-chevron-right:before { content: '\eab6'; }
.codicon-chevron-up:before { content: '\eab7'; }
.codicon-chrome-close:before { content: '\eab8'; }
.codicon-chrome-maximize:before { content: '\eab9'; }
.codicon-chrome-minimize:before { content: '\eaba'; }
.codicon-chrome-restore:before { content: '\eabb'; }
.codicon-circle-outline:before { content: '\eabc'; }
.codicon-debug-breakpoint-unverified:before { content: '\eabc'; }
.codicon-circle-slash:before { content: '\eabd'; }
.codicon-circuit-board:before { content: '\eabe'; }
.codicon-clear-all:before { content: '\eabf'; }
.codicon-clippy:before { content: '\eac0'; }
.codicon-close-all:before { content: '\eac1'; }
.codicon-cloud-download:before { content: '\eac2'; }
.codicon-cloud-upload:before { content: '\eac3'; }
.codicon-code:before { content: '\eac4'; }
.codicon-collapse-all:before { content: '\eac5'; }
.codicon-color-mode:before { content: '\eac6'; }
.codicon-comment-discussion:before { content: '\eac7'; }
.codicon-compare-changes:before { content: '\eafd'; }
.codicon-credit-card:before { content: '\eac9'; }
.codicon-dash:before { content: '\eacc'; }
.codicon-dashboard:before { content: '\eacd'; }
.codicon-database:before { content: '\eace'; }
.codicon-debug-continue:before { content: '\eacf'; }
.codicon-debug-disconnect:before { content: '\ead0'; }
.codicon-debug-pause:before { content: '\ead1'; }
.codicon-debug-restart:before { content: '\ead2'; }
.codicon-debug-start:before { content: '\ead3'; }
.codicon-debug-step-into:before { content: '\ead4'; }
.codicon-debug-step-out:before { content: '\ead5'; }
.codicon-debug-step-over:before { content: '\ead6'; }
.codicon-debug-stop:before { content: '\ead7'; }
.codicon-debug:before { content: '\ead8'; }
.codicon-device-camera-video:before { content: '\ead9'; }
.codicon-device-camera:before { content: '\eada'; }
.codicon-device-mobile:before { content: '\eadb'; }
.codicon-diff-added:before { content: '\eadc'; }
.codicon-diff-ignored:before { content: '\eadd'; }
.codicon-diff-modified:before { content: '\eade'; }
.codicon-diff-removed:before { content: '\eadf'; }
.codicon-diff-renamed:before { content: '\eae0'; }
.codicon-diff:before { content: '\eae1'; }
.codicon-discard:before { content: '\eae2'; }
.codicon-editor-layout:before { content: '\eae3'; }
.codicon-empty-window:before { content: '\eae4'; }
.codicon-exclude:before { content: '\eae5'; }
.codicon-extensions:before { content: '\eae6'; }
.codicon-eye-closed:before { content: '\eae7'; }
.codicon-file-binary:before { content: '\eae8'; }
.codicon-file-code:before { content: '\eae9'; }
.codicon-file-media:before { content: '\eaea'; }
.codicon-file-pdf:before { content: '\eaeb'; }
.codicon-file-submodule:before { content: '\eaec'; }
.codicon-file-symlink-directory:before { content: '\eaed'; }
.codicon-file-symlink-file:before { content: '\eaee'; }
.codicon-file-zip:before { content: '\eaef'; }
.codicon-files:before { content: '\eaf0'; }
.codicon-filter:before { content: '\eaf1'; }
.codicon-flame:before { content: '\eaf2'; }
.codicon-fold-down:before { content: '\eaf3'; }
.codicon-fold-up:before { content: '\eaf4'; }
.codicon-fold:before { content: '\eaf5'; }
.codicon-folder-active:before { content: '\eaf6'; }
.codicon-folder-opened:before { content: '\eaf7'; }
.codicon-gear:before { content: '\eaf8'; }
.codicon-gift:before { content: '\eaf9'; }
.codicon-gist-secret:before { content: '\eafa'; }
.codicon-gist:before { content: '\eafb'; }
.codicon-git-commit:before { content: '\eafc'; }
.codicon-git-compare:before { content: '\eafd'; }
.codicon-git-merge:before { content: '\eafe'; }
.codicon-github-action:before { content: '\eaff'; }
.codicon-github-alt:before { content: '\eb00'; }
.codicon-globe:before { content: '\eb01'; }
.codicon-grabber:before { content: '\eb02'; }
.codicon-graph:before { content: '\eb03'; }
.codicon-gripper:before { content: '\eb04'; }
.codicon-heart:before { content: '\eb05'; }
.codicon-home:before { content: '\eb06'; }
.codicon-horizontal-rule:before { content: '\eb07'; }
.codicon-hubot:before { content: '\eb08'; }
.codicon-inbox:before { content: '\eb09'; }
.codicon-issue-closed:before { content: '\eba4'; }
.codicon-issue-reopened:before { content: '\eb0b'; }
.codicon-issues:before { content: '\eb0c'; }
.codicon-italic:before { content: '\eb0d'; }
.codicon-jersey:before { content: '\eb0e'; }
.codicon-json:before { content: '\eb0f'; }
.codicon-kebab-vertical:before { content: '\eb10'; }
.codicon-key:before { content: '\eb11'; }
.codicon-law:before { content: '\eb12'; }
.codicon-lightbulb-autofix:before { content: '\eb13'; }
.codicon-link-external:before { content: '\eb14'; }
.codicon-link:before { content: '\eb15'; }
.codicon-list-ordered:before { content: '\eb16'; }
.codicon-list-unordered:before { content: '\eb17'; }
.codicon-live-share:before { content: '\eb18'; }
.codicon-loading:before { content: '\eb19'; }
.codicon-location:before { content: '\eb1a'; }
.codicon-mail-read:before { content: '\eb1b'; }
.codicon-mail:before { content: '\eb1c'; }
.codicon-markdown:before { content: '\eb1d'; }
.codicon-megaphone:before { content: '\eb1e'; }
.codicon-mention:before { content: '\eb1f'; }
.codicon-milestone:before { content: '\eb20'; }
.codicon-mortar-board:before { content: '\eb21'; }
.codicon-move:before { content: '\eb22'; }
.codicon-multiple-windows:before { content: '\eb23'; }
.codicon-mute:before { content: '\eb24'; }
.codicon-no-newline:before { content: '\eb25'; }
.codicon-note:before { content: '\eb26'; }
.codicon-octoface:before { content: '\eb27'; }
.codicon-open-preview:before { content: '\eb28'; }
.codicon-package:before { content: '\eb29'; }
.codicon-paintcan:before { content: '\eb2a'; }
.codicon-pin:before { content: '\eb2b'; }
.codicon-play:before { content: '\eb2c'; }
.codicon-run:before { content: '\eb2c'; }
.codicon-plug:before { content: '\eb2d'; }
.codicon-preserve-case:before { content: '\eb2e'; }
.codicon-preview:before { content: '\eb2f'; }
.codicon-project:before { content: '\eb30'; }
.codicon-pulse:before { content: '\eb31'; }
.codicon-question:before { content: '\eb32'; }
.codicon-quote:before { content: '\eb33'; }
.codicon-radio-tower:before { content: '\eb34'; }
.codicon-reactions:before { content: '\eb35'; }
.codicon-references:before { content: '\eb36'; }
.codicon-refresh:before { content: '\eb37'; }
.codicon-regex:before { content: '\eb38'; }
.codicon-remote-explorer:before { content: '\eb39'; }
.codicon-remote:before { content: '\eb3a'; }
.codicon-remove:before { content: '\eb3b'; }
.codicon-replace-all:before { content: '\eb3c'; }
.codicon-replace:before { content: '\eb3d'; }
.codicon-repo-clone:before { content: '\eb3e'; }
.codicon-repo-force-push:before { content: '\eb3f'; }
.codicon-repo-pull:before { content: '\eb40'; }
.codicon-repo-push:before { content: '\eb41'; }
.codicon-report:before { content: '\eb42'; }
.codicon-request-changes:before { content: '\eb43'; }
.codicon-rocket:before { content: '\eb44'; }
.codicon-root-folder-opened:before { content: '\eb45'; }
.codicon-root-folder:before { content: '\eb46'; }
.codicon-rss:before { content: '\eb47'; }
.codicon-ruby:before { content: '\eb48'; }
.codicon-save-all:before { content: '\eb49'; }
.codicon-save-as:before { content: '\eb4a'; }
.codicon-save:before { content: '\eb4b'; }
.codicon-screen-full:before { content: '\eb4c'; }
.codicon-screen-normal:before { content: '\eb4d'; }
.codicon-search-stop:before { content: '\eb4e'; }
.codicon-server:before { content: '\eb50'; }
.codicon-settings-gear:before { content: '\eb51'; }
.codicon-settings:before { content: '\eb52'; }
.codicon-shield:before { content: '\eb53'; }
.codicon-smiley:before { content: '\eb54'; }
.codicon-sort-precedence:before { content: '\eb55'; }
.codicon-split-horizontal:before { content: '\eb56'; }
.codicon-split-vertical:before { content: '\eb57'; }
.codicon-squirrel:before { content: '\eb58'; }
.codicon-star-full:before { content: '\eb59'; }
.codicon-star-half:before { content: '\eb5a'; }
.codicon-symbol-class:before { content: '\eb5b'; }
.codicon-symbol-color:before { content: '\eb5c'; }
.codicon-symbol-constant:before { content: '\eb5d'; }
.codicon-symbol-enum-member:before { content: '\eb5e'; }
.codicon-symbol-field:before { content: '\eb5f'; }
.codicon-symbol-file:before { content: '\eb60'; }
.codicon-symbol-interface:before { content: '\eb61'; }
.codicon-symbol-keyword:before { content: '\eb62'; }
.codicon-symbol-misc:before { content: '\eb63'; }
.codicon-symbol-operator:before { content: '\eb64'; }
.codicon-symbol-property:before { content: '\eb65'; }
.codicon-wrench:before { content: '\eb65'; }
.codicon-wrench-subaction:before { content: '\eb65'; }
.codicon-symbol-snippet:before { content: '\eb66'; }
.codicon-tasklist:before { content: '\eb67'; }
.codicon-telescope:before { content: '\eb68'; }
.codicon-text-size:before { content: '\eb69'; }
.codicon-three-bars:before { content: '\eb6a'; }
.codicon-thumbsdown:before { content: '\eb6b'; }
.codicon-thumbsup:before { content: '\eb6c'; }
.codicon-tools:before { content: '\eb6d'; }
.codicon-triangle-down:before { content: '\eb6e'; }
.codicon-triangle-left:before { content: '\eb6f'; }
.codicon-triangle-right:before { content: '\eb70'; }
.codicon-triangle-up:before { content: '\eb71'; }
.codicon-twitter:before { content: '\eb72'; }
.codicon-unfold:before { content: '\eb73'; }
.codicon-unlock:before { content: '\eb74'; }
.codicon-unmute:before { content: '\eb75'; }
.codicon-unverified:before { content: '\eb76'; }
.codicon-verified:before { content: '\eb77'; }
.codicon-versions:before { content: '\eb78'; }
.codicon-vm-active:before { content: '\eb79'; }
.codicon-vm-outline:before { content: '\eb7a'; }
.codicon-vm-running:before { content: '\eb7b'; }
.codicon-watch:before { content: '\eb7c'; }
.codicon-whitespace:before { content: '\eb7d'; }
.codicon-whole-word:before { content: '\eb7e'; }
.codicon-window:before { content: '\eb7f'; }
.codicon-word-wrap:before { content: '\eb80'; }
.codicon-zoom-in:before { content: '\eb81'; }
.codicon-zoom-out:before { content: '\eb82'; }
.codicon-list-filter:before { content: '\eb83'; }
.codicon-list-flat:before { content: '\eb84'; }
.codicon-list-selection:before { content: '\eb85'; }
.codicon-selection:before { content: '\eb85'; }
.codicon-list-tree:before { content: '\eb86'; }
.codicon-debug-breakpoint-function-unverified:before { content: '\eb87'; }
.codicon-debug-breakpoint-function:before { content: '\eb88'; }
.codicon-debug-breakpoint-function-disabled:before { content: '\eb88'; }
.codicon-debug-stackframe-active:before { content: '\eb89'; }
.codicon-debug-stackframe-dot:before { content: '\eb8a'; }
.codicon-debug-stackframe:before { content: '\eb8b'; }
.codicon-debug-stackframe-focused:before { content: '\eb8b'; }
.codicon-debug-breakpoint-unsupported:before { content: '\eb8c'; }
.codicon-symbol-string:before { content: '\eb8d'; }
.codicon-debug-reverse-continue:before { content: '\eb8e'; }
.codicon-debug-step-back:before { content: '\eb8f'; }
.codicon-debug-restart-frame:before { content: '\eb90'; }
.codicon-call-incoming:before { content: '\eb92'; }
.codicon-call-outgoing:before { content: '\eb93'; }
.codicon-menu:before { content: '\eb94'; }
.codicon-expand-all:before { content: '\eb95'; }
.codicon-feedback:before { content: '\eb96'; }
.codicon-group-by-ref-type:before { content: '\eb97'; }
.codicon-ungroup-by-ref-type:before { content: '\eb98'; }
.codicon-account:before { content: '\eb99'; }
.codicon-bell-dot:before { content: '\eb9a'; }
.codicon-debug-console:before { content: '\eb9b'; }
.codicon-library:before { content: '\eb9c'; }
.codicon-output:before { content: '\eb9d'; }
.codicon-run-all:before { content: '\eb9e'; }
.codicon-sync-ignored:before { content: '\eb9f'; }
.codicon-pinned:before { content: '\eba0'; }
.codicon-github-inverted:before { content: '\eba1'; }
.codicon-debug-alt:before { content: '\eb91'; }
.codicon-server-process:before { content: '\eba2'; }
.codicon-server-environment:before { content: '\eba3'; }
.codicon-pass:before { content: '\eba4'; }
.codicon-stop-circle:before { content: '\eba5'; }
.codicon-play-circle:before { content: '\eba6'; }
.codicon-record:before { content: '\eba7'; }
.codicon-debug-alt-small:before { content: '\eba8'; }
.codicon-vm-connect:before { content: '\eba9'; }
.codicon-cloud:before { content: '\ebaa'; }
.codicon-merge:before { content: '\ebab'; }
.codicon-export:before { content: '\ebac'; }
.codicon-graph-left:before { content: '\ebad'; }
.codicon-magnet:before { content: '\ebae'; }
.codicon-notebook:before { content: '\ebaf'; }
.codicon-redo:before { content: '\ebb0'; }
.codicon-check-all:before { content: '\ebb1'; }
.codicon-pinned-dirty:before { content: '\ebb2'; }
.codicon-pass-filled:before { content: '\ebb3'; }
.codicon-circle-large-filled:before { content: '\ebb4'; }
.codicon-circle-large-outline:before { content: '\ebb5'; }
.codicon-combine:before { content: '\ebb6'; }
.codicon-gather:before { content: '\ebb6'; }
.codicon-table:before { content: '\ebb7'; }
.codicon-variable-group:before { content: '\ebb8'; }
.codicon-type-hierarchy:before { content: '\ebb9'; }
.codicon-type-hierarchy-sub:before { content: '\ebba'; }
.codicon-type-hierarchy-super:before { content: '\ebbb'; }
.codicon-git-pull-request-create:before { content: '\ebbc'; }
.codicon-run-above:before { content: '\ebbd'; }
.codicon-run-below:before { content: '\ebbe'; }
.codicon-notebook-template:before { content: '\ebbf'; }
.codicon-debug-rerun:before { content: '\ebc0'; }
.codicon-workspace-trusted:before { content: '\ebc1'; }
.codicon-workspace-untrusted:before { content: '\ebc2'; }
.codicon-workspace-unspecified:before { content: '\ebc3'; }
.codicon-terminal-cmd:before { content: '\ebc4'; }
.codicon-terminal-debian:before { content: '\ebc5'; }
.codicon-terminal-linux:before { content: '\ebc6'; }
.codicon-terminal-powershell:before { content: '\ebc7'; }
.codicon-terminal-tmux:before { content: '\ebc8'; }
.codicon-terminal-ubuntu:before { content: '\ebc9'; }
.codicon-terminal-bash:before { content: '\ebca'; }
.codicon-arrow-swap:before { content: '\ebcb'; }
.codicon-copy:before { content: '\ebcc'; }
.codicon-person-add:before { content: '\ebcd'; }
.codicon-filter-filled:before { content: '\ebce'; }
.codicon-wand:before { content: '\ebcf'; }
.codicon-debug-line-by-line:before { content: '\ebd0'; }
.codicon-inspect:before { content: '\ebd1'; }
.codicon-layers:before { content: '\ebd2'; }
.codicon-layers-dot:before { content: '\ebd3'; }
.codicon-layers-active:before { content: '\ebd4'; }
.codicon-compass:before { content: '\ebd5'; }
.codicon-compass-dot:before { content: '\ebd6'; }
.codicon-compass-active:before { content: '\ebd7'; }
.codicon-azure:before { content: '\ebd8'; }
.codicon-issue-draft:before { content: '\ebd9'; }
.codicon-git-pull-request-closed:before { content: '\ebda'; }
.codicon-git-pull-request-draft:before { content: '\ebdb'; }
.codicon-debug-all:before { content: '\ebdc'; }
.codicon-debug-coverage:before { content: '\ebdd'; }
.codicon-run-errors:before { content: '\ebde'; }
.codicon-folder-library:before { content: '\ebdf'; }
.codicon-drop-down-button:before { content: '\eab4'; }
.codicon-scrollbar-button-left:before { content: '\eb6f'; }
.codicon-scrollbar-button-right:before { content: '\eb70'; }
.codicon-scrollbar-button-up:before { content: '\eb71'; }
.codicon-scrollbar-button-down:before { content: '\eb6e'; }
.codicon-widget-close:before { content: '\ea76'; }
.codicon-marker-navigation-next:before { content: '\ea9a'; }
.codicon-marker-navigation-previous:before { content: '\eaa1'; }
.codicon-suggest-more-info:before { content: '\eab6'; }
.codicon-tree-item-expanded:before { content: '\eab4'; }
.codicon-tree-filter-on-type-on:before { content: '\eb83'; }
.codicon-tree-filter-on-type-off:before { content: '\eb85'; }
.codicon-tree-filter-clear:before { content: '\ea76'; }
.codicon-tree-item-loading:before { content: '\eb19'; }
.codicon-find-selection:before { content: '\eb85'; }
.codicon-find-collapsed:before { content: '\eab6'; }
.codicon-find-expanded:before { content: '\eab4'; }
.codicon-find-replace:before { content: '\eb3d'; }
.codicon-find-replace-all:before { content: '\eb3c'; }
.codicon-find-previous-match:before { content: '\eaa1'; }
.codicon-find-next-match:before { content: '\ea9a'; }
.codicon-folding-expanded:before { content: '\eab4'; }
.codicon-folding-collapsed:before { content: '\eab6'; }
.codicon-parameter-hints-next:before { content: '\eab4'; }
.codicon-parameter-hints-previous:before { content: '\eab7'; }
.codicon-diff-review-insert:before { content: '\ea60'; }
.codicon-diff-review-remove:before { content: '\eb3b'; }
.codicon-diff-review-close:before { content: '\ea76'; }
.codicon-diff-insert:before { content: '\ea60'; }
.codicon-diff-remove:before { content: '\eb3b'; }
.codicon-menu-selection:before { content: '\eab2'; }
.codicon-menu-submenu:before { content: '\eab6'; }
.codicon-quick-input-back:before { content: '\ea9b'; }
.monaco-editor .accessibilityHelpWidget { background-color: #f3f3f3; }
.monaco-editor .accessibilityHelpWidget { color: #616161; }
.monaco-editor .accessibilityHelpWidget { box-shadow: 0 2px 8px rgba(0, 0, 0, 0.16); }
.monaco-editor, .monaco-editor-background, .monaco-editor .inputarea.ime-input { background-color: #fffffe; }
.monaco-editor, .monaco-editor .inputarea.ime-input { color: #000000; }
.monaco-editor .margin { background-color: #fffffe; }
.monaco-editor .rangeHighlight { background-color: rgba(253, 255, 0, 0.2); }
.monaco-editor .symbolHighlight { background-color: rgba(234, 92, 0, 0.33); }
.monaco-editor .mtkw { color: rgba(51, 51, 51, 0.2) !important; }
.monaco-editor .mtkz { color: rgba(51, 51, 51, 0.2) !important; }
.monaco-editor .unexpected-closing-bracket { color: rgba(255, 18, 18, 0.8); }
.monaco-editor .bracket-highlighting-0 { color: #0431fa; }
.monaco-editor .bracket-highlighting-1 { color: #319331; }
.monaco-editor .bracket-highlighting-2 { color: #7b3814; }
.monaco-editor .bracket-highlighting-3 { color: #0431fa; }
.monaco-editor .bracket-highlighting-4 { color: #319331; }
.monaco-editor .bracket-highlighting-5 { color: #7b3814; }
.monaco-editor .bracket-highlighting-6 { color: #0431fa; }
.monaco-editor .bracket-highlighting-7 { color: #319331; }
.monaco-editor .bracket-highlighting-8 { color: #7b3814; }
.monaco-editor .bracket-highlighting-9 { color: #0431fa; }
.monaco-editor .bracket-highlighting-10 { color: #319331; }
.monaco-editor .bracket-highlighting-11 { color: #7b3814; }
.monaco-editor .bracket-highlighting-12 { color: #0431fa; }
.monaco-editor .bracket-highlighting-13 { color: #319331; }
.monaco-editor .bracket-highlighting-14 { color: #7b3814; }
.monaco-editor .bracket-highlighting-15 { color: #0431fa; }
.monaco-editor .bracket-highlighting-16 { color: #319331; }
.monaco-editor .bracket-highlighting-17 { color: #7b3814; }
.monaco-editor .bracket-highlighting-18 { color: #0431fa; }
.monaco-editor .bracket-highlighting-19 { color: #319331; }
.monaco-editor .bracket-highlighting-20 { color: #7b3814; }
.monaco-editor .bracket-highlighting-21 { color: #0431fa; }
.monaco-editor .bracket-highlighting-22 { color: #319331; }
.monaco-editor .bracket-highlighting-23 { color: #7b3814; }
.monaco-editor .bracket-highlighting-24 { color: #0431fa; }
.monaco-editor .bracket-highlighting-25 { color: #319331; }
.monaco-editor .bracket-highlighting-26 { color: #7b3814; }
.monaco-editor .bracket-highlighting-27 { color: #0431fa; }
.monaco-editor .bracket-highlighting-28 { color: #319331; }
.monaco-editor .bracket-highlighting-29 { color: #7b3814; }
.monaco-editor .bracket-match { background-color: rgba(0, 100, 0, 0.1); }
.monaco-editor .bracket-match { border: 1px solid #b9b9b9; }
.monaco-editor .monaco-editor-overlaymessage .anchor.below { border-top-color: #007acc; }
.monaco-editor .monaco-editor-overlaymessage .anchor.top { border-bottom-color: #007acc; }
.monaco-editor .monaco-editor-overlaymessage .message { border: 1px solid #007acc; }
.monaco-editor .monaco-editor-overlaymessage .message { background-color: #d6ecf2; }

		.monaco-editor .contentWidgets .codicon.codicon-light-bulb {
			color: #ddb100;
			background-color: rgba(255, 255, 254, 0.7);
		}

		.monaco-editor .contentWidgets .codicon.codicon-lightbulb-autofix {
			color: #007acc;
			background-color: rgba(255, 255, 254, 0.7);
		}
.monaco-editor .codelens-decoration { color: #919191; }
.monaco-editor .codelens-decoration .codicon { color: #919191; }
.monaco-editor .codelens-decoration > a:hover { color: #0000ff !important; }
.monaco-editor .codelens-decoration > a:hover .codicon { color: #0000ff !important; }
.monaco-editor .line-numbers { color: #237893; }
.monaco-editor .line-numbers.active-line-number { color: #0b216f; }
.monaco-editor .view-overlays .current-line { border: 2px solid rgba(87, 104, 113, 0.44); }
.monaco-editor .margin-view-overlays .current-line-margin { border: 2px solid rgba(87, 104, 113, 0.44); }
.monaco-editor .lines-content .cigr { box-shadow: 1px 0 0 0 #d3d3d3 inset; }
.monaco-editor .lines-content .cigra { box-shadow: 1px 0 0 0 #939393 inset; }
.monaco-editor .minimap-slider .minimap-slider-horizontal { background: rgba(100, 100, 100, 0.2); }
.monaco-editor .minimap-slider:hover .minimap-slider-horizontal { background: rgba(100, 100, 100, 0.35); }
.monaco-editor .minimap-slider.active .minimap-slider-horizontal { background: rgba(0, 0, 0, 0.3); }
.monaco-editor .minimap-shadow-visible { box-shadow: #dddddd -6px 0 6px -6px inset; }
.monaco-editor .view-ruler { box-shadow: 1px 0 0 0 #d3d3d3 inset; }
.monaco-editor .scroll-decoration { box-shadow: #dddddd 0 6px 6px -6px inset; }
.monaco-editor .focused .selected-text { background-color: #add6ff; }
.monaco-editor .selected-text { background-color: #e5ebf1; }
.monaco-editor .cursors-layer .cursor { background-color: #000000; border-color: #000000; color: #ffffff; }
.monaco-editor .squiggly-error { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23e51400'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-warning { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23bf8803'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-info { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%231a85ff'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-hint { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%20height%3D%223%22%20width%3D%2212%22%3E%3Cg%20fill%3D%22%236c6c6c%22%3E%3Ccircle%20cx%3D%221%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3Ccircle%20cx%3D%225%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3Ccircle%20cx%3D%229%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") no-repeat bottom left; }
.monaco-editor.showUnused .squiggly-inline-unnecessary { opacity: 0.467; }
.monaco-editor.showDeprecated .squiggly-inline-deprecated { text-decoration: line-through; text-decoration-color: #000000}

			.monaco-editor .zone-widget .codicon.codicon-error,
			.markers-panel .marker-icon.codicon.codicon-error,
			.text-search-provider-messages .providerMessage .codicon.codicon-error,
			.extensions-viewlet > .extensions .codicon.codicon-error {
				color: #e51400;
			}
		

			.monaco-editor .zone-widget .codicon.codicon-warning,
			.markers-panel .marker-icon.codicon.codicon-warning,
			.extensions-viewlet > .extensions .codicon.codicon-warning,
			.extension-editor .codicon.codicon-warning,
			.text-search-provider-messages .providerMessage .codicon.codicon-warning,
			.preferences-editor .codicon.codicon-warning {
				color: #bf8803;
			}
		

			.monaco-editor .zone-widget .codicon.codicon-info,
			.markers-panel .marker-icon.codicon.codicon-info,
			.extensions-viewlet > .extensions .codicon.codicon-info,
			.text-search-provider-messages .providerMessage .codicon.codicon-info,
			.extension-editor .codicon.codicon-info {
				color: #1a85ff;
			}
		
.monaco-editor .marker-widget a.code-link span { color: #006ab1; }
.monaco-editor .marker-widget a.code-link span:hover { color: #006ab1; }
.monaco-hover .hover-contents a.code-link span { color: #006ab1; }
.monaco-hover .hover-contents a.code-link span:hover { color: #006ab1; }
.monaco-editor .ghost-text-decoration { opacity: 0.467; color: #000000; }
.monaco-editor .ghost-text-decoration-preview { color: rgba(0, 0, 0, 0.47); }
.monaco-editor .suggest-preview-text .ghost-text { opacity: 0.467; color: #000000; }
.monaco-editor .snippet-placeholder { background-color: rgba(10, 50, 100, 0.2); outline-color: transparent; }
.monaco-editor .finish-snippet-placeholder { background-color: transparent; outline-color: rgba(10, 50, 100, 0.5); }
.codicon.codicon-symbol-array { color: #616161; }
.codicon.codicon-symbol-boolean { color: #616161; }
.codicon.codicon-symbol-class { color: #d67e00; }
.codicon.codicon-symbol-method { color: #652d90; }
.codicon.codicon-symbol-color { color: #616161; }
.codicon.codicon-symbol-constant { color: #616161; }
.codicon.codicon-symbol-constructor { color: #652d90; }

			.codicon.codicon-symbol-value,.codicon.codicon-symbol-enum { color: #d67e00; }
.codicon.codicon-symbol-enum-member { color: #007acc; }
.codicon.codicon-symbol-event { color: #d67e00; }
.codicon.codicon-symbol-field { color: #007acc; }
.codicon.codicon-symbol-file { color: #616161; }
.codicon.codicon-symbol-folder { color: #616161; }
.codicon.codicon-symbol-function { color: #652d90; }
.codicon.codicon-symbol-interface { color: #007acc; }
.codicon.codicon-symbol-key { color: #616161; }
.codicon.codicon-symbol-keyword { color: #616161; }
.codicon.codicon-symbol-module { color: #616161; }
.codicon.codicon-symbol-namespace { color: #616161; }
.codicon.codicon-symbol-null { color: #616161; }
.codicon.codicon-symbol-number { color: #616161; }
.codicon.codicon-symbol-object { color: #616161; }
.codicon.codicon-symbol-operator { color: #616161; }
.codicon.codicon-symbol-package { color: #616161; }
.codicon.codicon-symbol-property { color: #616161; }
.codicon.codicon-symbol-reference { color: #616161; }
.codicon.codicon-symbol-snippet { color: #616161; }
.codicon.codicon-symbol-string { color: #616161; }
.codicon.codicon-symbol-struct { color: #616161; }
.codicon.codicon-symbol-text { color: #616161; }
.codicon.codicon-symbol-type-parameter { color: #616161; }
.codicon.codicon-symbol-unit { color: #616161; }
.codicon.codicon-symbol-variable { color: #007acc; }
.monaco-editor .suggest-widget .monaco-list .monaco-list-row .monaco-highlighted-label .highlight { color: #0066bf; }
.monaco-editor .suggest-widget .monaco-list .monaco-list-row.focused .monaco-highlighted-label .highlight { color: #9dddff; }
.monaco-editor .suggest-widget, .monaco-editor .suggest-details { color: #000000; }
.monaco-editor .suggest-widget .monaco-list .monaco-list-row.focused { color: #ffffff; }
.monaco-editor .suggest-details a { color: #006ab1; }
.monaco-editor .suggest-details a:hover { color: #006ab1; }
.monaco-editor .suggest-details code { background-color: rgba(220, 220, 220, 0.4); }
.monaco-editor .reference-zone-widget .ref-tree .referenceMatch .highlight { background-color: rgba(234, 92, 0, 0.3); }
.monaco-editor .reference-zone-widget .preview .reference-decoration { background-color: rgba(245, 216, 2, 0.87); }
.monaco-editor .reference-zone-widget .ref-tree { background-color: #f3f3f3; }
.monaco-editor .reference-zone-widget .ref-tree { color: #646465; }
.monaco-editor .reference-zone-widget .ref-tree .reference-file { color: #1e1e1e; }
.monaco-editor .reference-zone-widget .ref-tree .monaco-list:focus .monaco-list-rows > .monaco-list-row.selected:not(.highlighted) { background-color: rgba(51, 153, 255, 0.2); }
.monaco-editor .reference-zone-widget .ref-tree .monaco-list:focus .monaco-list-rows > .monaco-list-row.selected:not(.highlighted) { color: #6c6c6c !important; }
.monaco-editor .reference-zone-widget .preview .monaco-editor .monaco-editor-background,.monaco-editor .reference-zone-widget .preview .monaco-editor .inputarea.ime-input {	background-color: #f2f8fc;}
.monaco-editor .reference-zone-widget .preview .monaco-editor .margin {	background-color: #f2f8fc;}
.monaco-editor .goto-definition-link { color: #0000ff !important; }
.monaco-editor .hoverHighlight { background-color: rgba(173, 214, 255, 0.15); }
.monaco-editor .monaco-hover { background-color: #f3f3f3; }
.monaco-editor .monaco-hover { border: 1px solid #c8c8c8; }
.monaco-editor .monaco-hover .hover-row:not(:first-child):not(:empty) { border-top: 1px solid rgba(200, 200, 200, 0.5); }
.monaco-editor .monaco-hover hr { border-top: 1px solid rgba(200, 200, 200, 0.5); }
.monaco-editor .monaco-hover hr { border-bottom: 0px solid rgba(200, 200, 200, 0.5); }
.monaco-editor .monaco-hover a { color: #006ab1; }
.monaco-editor .monaco-hover a:hover { color: #006ab1; }
.monaco-editor .monaco-hover { color: #616161; }
.monaco-editor .monaco-hover .hover-row .actions { background-color: #e7e7e7; }
.monaco-editor .monaco-hover code { background-color: rgba(220, 220, 220, 0.4); }
.monaco-editor .findOptionsWidget { background-color: #f3f3f3; }
.monaco-editor .findOptionsWidget { color: #616161; }
.monaco-editor .findOptionsWidget { box-shadow: 0 0 8px 2px rgba(0, 0, 0, 0.16); }
.monaco-editor .findMatch { background-color: rgba(234, 92, 0, 0.33); }
.monaco-editor .currentFindMatch { background-color: #a8ac94; }
.monaco-editor .findScope { background-color: rgba(180, 180, 180, 0.3); }
.monaco-editor .find-widget { background-color: #f3f3f3; }
.monaco-editor .find-widget { box-shadow: 0 0 8px 2px rgba(0, 0, 0, 0.16); }
.monaco-editor .find-widget { color: #616161; }
.monaco-editor .find-widget.no-results .matchesCount { color: #a1260d; }
.monaco-editor .find-widget .monaco-sash { background-color: #c8c8c8; }

		.monaco-editor .find-widget .button:not(.disabled):hover,
		.monaco-editor .find-widget .codicon-find-selection:hover {
			background-color: rgba(184, 184, 184, 0.31) !important;
		}
	
.monaco-editor .find-widget .monaco-inputbox.synthetic-focus { outline-color: #0090f1; }
.monaco-editor .folded-background { background-color: rgba(173, 214, 255, 0.3); }

		.monaco-editor .cldr.codicon.codicon-folding-expanded,
		.monaco-editor .cldr.codicon.codicon-folding-collapsed {
			color: #424242 !important;
		}
		
.monaco-editor.vs .valueSetReplacement { outline: solid 2px #b9b9b9; }
.monaco-editor .tokens-inspect-widget { border: 1px solid #c8c8c8; }
.monaco-editor .tokens-inspect-widget .tokens-inspect-separator { background-color: #c8c8c8; }
.monaco-editor .tokens-inspect-widget { background-color: #f3f3f3; }
.monaco-editor .tokens-inspect-widget { color: #616161; }
.monaco-editor .linked-editing-decoration { background: rgba(255, 0, 0, 0.3); border-left-color: rgba(255, 0, 0, 0.3); }
.monaco-editor .detected-link-active { color: #0000ff !important; }
.monaco-editor .parameter-hints-widget { border: 1px solid #c8c8c8; }
.monaco-editor .parameter-hints-widget.multiple .body { border-left: 1px solid rgba(200, 200, 200, 0.5); }
.monaco-editor .parameter-hints-widget .signature.has-docs { border-bottom: 1px solid rgba(200, 200, 200, 0.5); }
.monaco-editor .parameter-hints-widget { background-color: #f3f3f3; }
.monaco-editor .parameter-hints-widget a { color: #006ab1; }
.monaco-editor .parameter-hints-widget a:hover { color: #006ab1; }
.monaco-editor .parameter-hints-widget { color: #616161; }
.monaco-editor .parameter-hints-widget code { background-color: rgba(220, 220, 220, 0.4); }
.monaco-editor .focused .selectionHighlight { background-color: rgba(173, 214, 255, 0.3); }
.monaco-editor .selectionHighlight { background-color: rgba(173, 214, 255, 0.15); }
.monaco-editor .wordHighlight { background-color: rgba(87, 87, 87, 0.25); }
.monaco-editor .wordHighlightStrong { background-color: rgba(14, 99, 156, 0.25); }
.monaco-diff-editor .diff-review-line-number { color: #237893; }
.monaco-diff-editor .diff-review-shadow { box-shadow: #dddddd 0 -6px 6px -6px inset; }
.monaco-editor .line-insert, .monaco-editor .char-insert { background-color: rgba(155, 185, 85, 0.2); }
.monaco-diff-editor .line-insert, .monaco-diff-editor .char-insert { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .inline-added-margin-view-zone { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .line-delete, .monaco-editor .char-delete { background-color: rgba(255, 0, 0, 0.2); }
.monaco-diff-editor .line-delete, .monaco-diff-editor .char-delete { background-color: rgba(255, 0, 0, 0.2); }
.monaco-editor .inline-deleted-margin-view-zone { background-color: rgba(255, 0, 0, 0.2); }
.monaco-diff-editor.side-by-side .editor.modified { box-shadow: -6px 0 5px -5px #dddddd; }

			.monaco-diff-editor .diffViewport {
				background: rgba(100, 100, 100, 0.4);
			}
		

			.monaco-diff-editor .diffViewport:hover {
				background: rgba(100, 100, 100, 0.7);
			}
		

			.monaco-diff-editor .diffViewport:active {
				background: rgba(0, 0, 0, 0.6);
			}
		

	.monaco-editor .diagonal-fill {
		background-image: linear-gradient(
			-45deg,
			rgba(34, 34, 34, 0.2) 12.5%,
			#0000 12.5%, #0000 50%,
			rgba(34, 34, 34, 0.2) 50%, rgba(34, 34, 34, 0.2) 62.5%,
			#0000 62.5%, #0000 100%
		);
		background-size: 8px 8px;
	}
	

.mtk1 { color: #000000; }
.mtk2 { color: #fffffe; }
.mtk3 { color: #808080; }
.mtk4 { color: #ff0000; }
.mtk5 { color: #d11534; }
.mtk6 { color: #0451a5; }
.mtk7 { color: #0000ff; }
.mtk8 { color: #098658; }
.mtk9 { color: #137c36; }
.mtk10 { color: #008000; }
.mtk11 { color: #dd0000; }
.mtk12 { color: #383838; }
.mtk13 { color: #cd3131; }
.mtk14 { color: #863b00; }
.mtk15 { color: #af00db; }
.mtk16 { color: #800000; }
.mtk17 { color: #e00000; }
.mtk18 { color: #576871; }
.mtk19 { color: #3030c0; }
.mtk20 { color: #666666; }
.mtk21 { color: #778899; }
.mtk22 { color: #c700c7; }
.mtk23 { color: #a31515; }
.mtk24 { color: #4f76ac; }
.mtk25 { color: #008080; }
.mtk26 { color: #025f59; }
.mtk27 { color: #001188; }
.mtk28 { color: #4864aa; }
.mtki { font-style: italic; }
.mtkb { font-weight: bold; }
.mtku { text-decoration: underline; text-underline-position: under; }</style><title> Strings | HackerRank </title><meta name="description" id="meta-description" content="Learn how to input and output strings."><meta property="og:title" id="meta-og-title" content="Strings | HackerRank"><meta property="og:description" id="meta-og-description" content="Learn how to input and output strings."><meta property="og:url" id="meta-og-url" content="https://www.hackerrank.com/challenges/c-tutorial-strings/problem"><meta name="twitter:url" id="meta-twitter-url" content="https://www.hackerrank.com/challenges/c-tutorial-strings/problem"><meta name="twitter:title" id="meta-twitter-title" content="Strings | HackerRank"><link rel="canonical" href="https://www.hackerrank.com/challenges/c-tutorial-strings/problem"><style data-emotion="css"></style><style type="text/css" media="screen">
		.monaco-editor .codelens-decoration._ee1f62 { line-height: 20px; font-size: 13px; padding-right: 7px; font-feature-settings: var(--codelens-font-features_ee1f62) }
		.monaco-editor .codelens-decoration._ee1f62 span.codicon { line-height: 20px; font-size: 13px; }
		</style></head>

<body data-theme="light" id="hr_v2" class="hr-community">
  
    
      <script>document.cookie.search("user_theme=dark")>-1&&document.body.classList.add("theme-dark");</script>
    
  

  <div id="fb-root"></div>
    

  <!-- Just a placeholder div to start loading open sans and source code loader -->
  <div class="font-open-sans-loader"></div>
  <div class="font-source-code-loader"></div>
  <!-- Just a placeholder div to start loading open sans and source code loader end -->

  <div id="content" onclick="void(0);"><div class="ui-kit-root"><div class="body-wrap community-page challenges-page problem-page"><div class=""><div class="theme-m new-design logged-user"><div class="page-header-wrapper theme-m-section"><nav class="community-header"><div class="d-flex align-items-center justify-content-between community-header-container"><div class="header-nav-links theme-m-section"><ul class="nav-links"><li class="nav-link-item logo-wrap"><a class="logo-link d-flex align-items-center" data-analytics="NavBarLogo" data-attr1="/dashboard" data-automation="logo-link" href="https://www.hackerrank.com/dashboard"><img id="feed-intro" class="logo-img-small" src="./Strings _files/hackerrank_logo-21e2867566.svg" alt="HackerRank Home"><h4>HackerRank</h4></a></li><div class="nav-logo-separator">|</div><li class="nav-link-item"><a class="nav-link active" data-analytics="NavBarDomains" data-automation="dashboard-link" href="https://www.hackerrank.com/dashboard"><span>Prepare</span></a></li><li class="nav-link-item"><a class="nav-link " data-analytics="NavBarDomains" href="https://www.hackerrank.com/skills-verification"><span>Certify</span></a></li><li class="nav-link-item"><a class="nav-link contests" data-analytics="NavBarContests" href="https://www.hackerrank.com/contests"><span>Compete</span></a></li><li class="nav-link-item"><a class="nav-link " data-analytics="NavBarApply" href="https://www.hackerrank.com/apply"><span>Apply</span></a></li></ul></div><div class="nav-buttons theme-m-section"><ul class="pull-left psR"><li class="search-input-container input-icon main-hr-search" id="search-span"><div class="search-form new-search"><div><div class="search-query asyn-autocomplete autocomplete"><div class="ac-input-wrap cf"><input autocomplete="off" class="ac-input " value="" placeholder="Search"></div></div><i class="ui-icon-search"></i></div></div></li></ul><ul class="pull-left nav-wrap mmL"><li class="button-item"><div class="dropdown dropdown message-dropdown notify-dropdown theme-m-content"><div data-analytics="NavBarMessageIcon" aria-haspopup="menu" aria-expanded="false" class="dropdown-handle cursor nav_link hr_nav_messages_link"><i class="dropdown-icon ui-icon-message"></i></div></div></li><li class="button-item"><div class="dropdown dropdown notification-dropdown notify-dropdown theme-m-content"><div data-toggle="dropdown" data-analytics="NavBarNotificationsIcon" aria-haspopup="menu" aria-expanded="false" class="dropdown-handle cursor nav_link hr_nav_notifications_link"><i class="dropdown-icon ui-icon-notification"></i></div></div></li><li class="button-item separator">|</li><li class="button-item"><div class="app-drawer"><button class="ui-icon-btn ui-btn-normal"><span class="sr-only">Switch to..</span><svg width="1em" height="1em" viewBox="0 0 24 24" aria-hidden="true" focusable="false" style="color:#b7c9cc" class=" ui-svg-icon" fill="currentColor"><path d="M9.448 2.713c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274z"></path><path fill-rule="evenodd" clip-rule="evenodd" d="M18.648 2.713c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274z"></path><path d="M.248 2.713c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274zm9.2 9.226c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274z"></path><path fill-rule="evenodd" clip-rule="evenodd" d="M18.648 11.939c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274z"></path><path d="M.248 11.939c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274zm9.2 9.226c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274z"></path><path fill-rule="evenodd" clip-rule="evenodd" d="M18.648 21.165c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274z"></path><path d="M.248 21.165c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274z"></path></svg></button></div></li><li class="button-item"><div class="dropdown profile-menu theme-m-content"><div data-analytics="NavBarProfileDropDown" aria-haspopup="menu" aria-expanded="false" class="dropdown-handle nav_link toggle-wrap"><div class="user-avatar-placeholder d-flex align-items-center justify-content-center"><svg viewBox="0 0 24 24" width="1em" height="1em" class=" ui-svg-icon" fill="currentColor"><path d="M21 23c-.6 0-1-.4-1-1v-2.2c0-1.9-1.6-3.4-3.5-3.4h-9c-1.9 0-3.5 1.5-3.5 3.4V22c0 .6-.5 1-1 1s-1-.4-1-1v-2.2c0-3 2.5-5.4 5.5-5.4h9c3 0 5.5 2.4 5.5 5.4V22c0 .6-.5 1-1 1zm-9-11.1c-3 0-5.4-2.4-5.4-5.4S9 1 12 1s5.4 2.4 5.4 5.4-2.4 5.5-5.4 5.5zM12 3c-1.9 0-3.4 1.5-3.4 3.4s1.5 3.4 3.4 3.4 3.4-1.5 3.4-3.4S13.9 3 12 3z"></path></svg></div><i class="ui-icon-chevron-down down-icon"></i></div></div></li></ul></div></div></nav></div><header class="community-header-breadcrumb"><div class="container"><div class="d-flex justify-content-between align-items-center content-header-wrapper"><div class="community-header-breadcrumb-items"><ol itemtype="http://schema.org/BreadcrumbList" class="community-breadcrumb text-content ellipsis"><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><a itemprop="item" class="breadcrumb-link" data-analytics="Breadcrumb" data-attr1="Prepare" data-attr2="global" data-attr7="1" href="https://www.hackerrank.com/dashboard"><span itemprop="name" class="breadcrumb-item-text">Prepare</span></a><meta itemprop="position" content="1"></li><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><span class="ui-icon-chevron-right mmL mmR chevron-icon"></span><a itemprop="item" class="breadcrumb-link" data-analytics="Breadcrumb" data-attr1="C++" data-attr2="global" data-attr7="1" href="https://www.hackerrank.com/domains/cpp"><span itemprop="name" class="breadcrumb-item-text">C++</span></a><meta itemprop="position" content="1"></li><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><span class="ui-icon-chevron-right mmL mmR chevron-icon"></span><a itemprop="item" class="breadcrumb-link" data-analytics="Breadcrumb" data-attr1="Strings" data-attr2="global" data-attr7="1" href="https://www.hackerrank.com/domains/cpp/cpp-strings"><span itemprop="name" class="breadcrumb-item-text">Strings</span></a><meta itemprop="position" content="1"></li><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><span class="ui-icon-chevron-right mmL mmR chevron-icon"></span><span itemprop="name" class="breadcrumb-item-text">Strings</span><meta itemprop="position" content="1"></li></ol><div class="page-label-wrapper text-headline"><h1 class="page-label"><div class="challenge-page-label-wrapper align-items-center"><h1 class="ui-icon-label page-label">Strings</h1><button class="ui-btn ui-btn-normal ui-btn-plain star-button" aria-label="Add to favourites"><div class="ui-content align-icon-right"><span class="ui-text" aria-hidden="false"><i class="icon-bookmark star-icon ui-icon-star"></i></span></div></button></div></h1></div></div><div class="community-header-aside"><div class="challenge-header-aside"><div class="track-badge-progress"><div class="badge-progress"><div class="remaining"><div class="point-left-wrap"><span class="point-left">20 more points</span> to get your next star!</div><div class="track-progress-bar"><div class="ui-progress-bar progress-bar theme-default"><div class="progress-filler" style="width: 33%;"></div></div></div><div class="score-info"><span class="current-rank">Rank: <span class="value">788512</span></span><span class="pipe">|</span><span class="current-points">Points: <span class="value">20/40</span></span><a class="scoring-link" data-analytics="BadgeLearnMoreLink" data-attr1="cpp" target="_blank" href="https://www.hackerrank.com/scoring"><i class="scoring-icon ui-icon-warning-hexagon"></i></a></div></div><div location="[object Object]" params="[object Object]" router="[object Object]" additionalcontext="[object Object]" class="ui-badge level-bronze"><div class="ui-badge-wrap"><svg viewBox="0 0 91 100" class="hexagon"><g><defs><lineargradient id="badge-bronze-gradient" x1="52.5" y1="2.5" x2="52.5" y2="102.5" gradientUnits="userSpaceOnUse"><stop offset="0" stop-color="#ffc5ab"></stop><stop offset="1" stop-color="#ffa38a"></stop></lineargradient></defs><path fill="url(#badge-bronze-gradient)" d="M90.3892 44.9106L90.3893 44.914C90.5873 51.9976 90.3892 59.5788 89.8948 65.4581L89.8947 65.4581L89.894 65.4684C89.7459 67.8071 89.5241 69.8644 89.2548 71.4803C88.9812 73.1224 88.6689 74.2376 88.3726 74.7495L88.3684 74.7569L88.3644 74.7644C88.2249 75.0255 87.9549 75.366 87.5388 75.7853C87.1279 76.1994 86.5969 76.6683 85.9594 77.1872C84.6848 78.2247 83.011 79.4407 81.0792 80.7886C76.1371 84.1752 69.4065 88.1657 62.9661 91.6605L62.9645 91.6614C58.9514 93.8584 55.1183 95.8269 51.996 97.2447C50.4343 97.9539 49.0577 98.522 47.9293 98.9118C46.7841 99.3074 45.9476 99.5 45.4429 99.5C44.8368 99.5 43.7518 99.219 42.2485 98.6583C40.7685 98.1063 38.9475 97.3088 36.9015 96.3316C32.811 94.3779 27.849 91.7188 22.9696 88.9044C18.0901 86.09 13.3015 83.125 9.55688 80.5609C7.68397 79.2784 6.07847 78.1005 4.85537 77.0948C3.6188 76.0781 2.82774 75.2805 2.51554 74.7536C2.28519 74.3275 2.0493 73.5182 1.82917 72.3438C1.61115 71.1807 1.41751 69.7122 1.25082 68.0137C0.917563 64.6178 0.694767 60.3313 0.595718 55.7891L0.595639 55.7862C0.39748 48.597 0.496929 40.7167 0.991039 34.7412L0.991144 34.7412L0.991781 34.7309C1.13992 32.3423 1.36172 30.2598 1.63112 28.6185C1.90193 26.9685 2.21232 25.8224 2.51467 25.2483C2.86854 24.6758 3.67611 23.8504 4.9172 22.8226C6.15287 21.7992 7.77552 20.6094 9.70207 19.315L9.70402 19.3137C14.5518 16.0235 21.0868 12.0319 27.3246 8.63924L27.3247 8.63927L27.3296 8.63653C31.4393 6.34112 35.4202 4.29812 38.6657 2.83059C40.2891 2.09658 41.7217 1.5096 42.8908 1.10715C44.0779 0.698497 44.9386 0.5 45.4429 0.5C45.8599 0.5 46.5131 0.630344 47.3938 0.904038C48.2627 1.17405 49.3131 1.57058 50.508 2.07336C52.8947 3.07763 55.8302 4.49415 58.9957 6.13884L76.0424 15.9271C79.2093 17.9719 82.072 19.9123 84.2641 21.5505C85.3617 22.3708 86.285 23.1108 86.9918 23.7467C87.708 24.391 88.1652 24.8965 88.372 25.2495C88.6251 25.6975 88.8797 26.5434 89.1143 27.7675C89.346 28.9765 89.5489 30.5006 89.7217 32.2614C90.0674 35.7817 90.2902 40.2179 90.3892 44.9106Z" stroke="#bd6e52"></path></g><image class="badge-icon" xlink:href="https://hrcdn.net/fcore/assets/badges/cpp-739b350881.svg" x="50%" y="22" height="27" width="27" transform="translate(-13.5, 0)"></image><text class="badge-title" x="50%" y="65.5" font-size="10">CPP</text><g class="star-section" transform="translate(-3.5, 0)"><svg x="50%" y="71" height="10"><svg class="badge-star" viewBox="0 0 6.54904 6.25825" width="7" x="0"><path class="star" d="M55.51425,77.01983l-1.89417-.275-.84833-1.7175a.299.299,0,0,0-.27167-.16917.3245.3245,0,0,0-.2725.16917l-.305.61833-.5425,1.09916-.51417.075-1.38.2a.30333.30333,0,0,0-.18583.10083.33411.33411,0,0,0-.045.06833.35631.35631,0,0,0-.02417.07667.34087.34087,0,0,0-.005.04083.3038.3038,0,0,0,.02417.13417.33341.33341,0,0,0,.06667.0975l1.37167,1.33667-.2875,1.67167-.03667.21417c-.00167.01-.00167.02-.0025.02917l-.00167.0175a.26453.26453,0,0,0,.00167.04417.30489.30489,0,0,0,.44417.22917l1.69417-.89,1.69416.89a.30352.30352,0,0,0,.44084-.32L54.31175,78.874l1.37083-1.33667a.30339.30339,0,0,0-.16833-.5175" transform="translate(-49.22548 -74.85817)"></path></svg></svg></g></svg></div></div></div></div></div></div></div></div></header><div class="container"></div><div class="community-content"><div class="challenge-view theme-m"><div class="challenge-page-header container"><div class="theme-m-content submission-status-banner ui-card ui-layer-2"><div class="card-content"><div class="submission-model-wrapper"><div class="points-message">Your Strings submission got 10.00 points.</div><div class="share-btns-wrap"><iframe src="./Strings _files/share_button.html" scrolling="no" frameborder="0" class="share-btn" allowtransparency="true"></iframe>&nbsp;&nbsp;<iframe src="./Strings _files/tweet_button.html" scrolling="no" frameborder="0" class="share-btn" allowtransparency="true"></iframe></div><div class="next-star-message"><span>You are now 20 points away from the 2nd star for your c++ badge.</span></div><div class="next-challenge-link"><span class="challenge-next-link"><a class="challenge-link close-success" href="https://www.hackerrank.com/challenges/c-tutorial-stringstream?isFullScreen=true">Try the next challenge</a></span><span class="seperator">&nbsp;|&nbsp;</span><span class="challenge-random-link"><a class="challenge-link hr_tour-leaderboard close-success" href="https://www.hackerrank.com/challenges/attribute-parser">Try a Random Challenge</a></span></div></div><span class="ui-icon-cross cross-icon"></span></div></div><div class="ui-tabs-wrap"><div class="render-list clearfix"><div class="tab-header" role="navigation"><a id="tab-2-item-0" class="tab-item active" href="https://www.hackerrank.com/challenges/c-tutorial-strings/problem"><div class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/c-tutorial-strings/problem" data-attr2="Problem" data-attr3="no_full_screen"><span class="ui-icon-label">Problem</span></div></a><a id="tab-2-item-1" class="tab-item" href="https://www.hackerrank.com/challenges/c-tutorial-strings/submissions"><div class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/c-tutorial-strings/submissions" data-attr2="Submissions" data-attr3="no_full_screen"><span class="ui-icon-label">Submissions</span></div></a><a id="tab-2-item-2" class="tab-item" href="https://www.hackerrank.com/challenges/c-tutorial-strings/leaderboard"><div class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/c-tutorial-strings/leaderboard" data-attr2="Leaderboard" data-attr3="no_full_screen"><span class="ui-icon-label">Leaderboard</span></div></a><a id="tab-2-item-3" class="tab-item" href="https://www.hackerrank.com/challenges/c-tutorial-strings/forum"><div class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/c-tutorial-strings/forum" data-attr2="Discussions" data-attr3="no_full_screen"><span class="ui-icon-label">Discussions</span></div></a></div></div></div></div><section class="challenge-interface challenge-problem"><div class="challenge-body"><div class="challenge-body-elements-problem challenge-container-element"><div class="full-screen-view"><div class="full-screeen-header"><div class="align-left-conatiner"><div class="nav-link-item logo-wrap"><a data-analytics="NavBarLogo" class="logo-link d-flex align-items-center" href="https://www.hackerrank.com/dashboard"><img id="feed-intro" class="logo-img-small" src="./Strings _files/hackerrank_logo-21e2867566.svg" alt=""><h4>HackerRank</h4></a></div><div class="nav-logo-separator">|</div><ol itemtype="http://schema.org/BreadcrumbList" class="community-breadcrumb text-content"><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><a itemprop="item" class="breadcrumb-link" data-analytics="Breadcrumb" data-attr1="Prepare" data-attr2="global" data-attr7="1" href="https://www.hackerrank.com/dashboard"><span itemprop="name" class="breadcrumb-item-text">Prepare</span></a><meta itemprop="position" content="1"></li><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><span class="ui-icon-chevron-right mmL mmR chevron-icon"></span><a itemprop="item" class="breadcrumb-link" data-analytics="Breadcrumb" data-attr1="C++" data-attr2="global" data-attr7="1" href="https://www.hackerrank.com/domains/cpp"><span itemprop="name" class="breadcrumb-item-text">C++</span></a><meta itemprop="position" content="1"></li><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><span class="ui-icon-chevron-right mmL mmR chevron-icon"></span><a itemprop="item" class="breadcrumb-link" data-analytics="Breadcrumb" data-attr1="Strings" data-attr2="global" data-attr7="1" href="https://www.hackerrank.com/domains/cpp/cpp-strings"><span itemprop="name" class="breadcrumb-item-text">Strings</span></a><meta itemprop="position" content="1"></li><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><span class="ui-icon-chevron-right mmL mmR chevron-icon"></span><span itemprop="name" class="breadcrumb-item-text">Strings</span><meta itemprop="position" content="1"></li></ol></div><div class="align-right-container"><a class="restoreScreen active-link no-select" data-analytics="Exit fullscreen"><span>Exit Full Screen View</span><i class="ui-icon-restore-size"></i></a></div></div><div class="contents-wrapper"><div class="fs-pains-container"><div class="fs-left-pane" style="width: calc(45% - 6px); position: relative;"><div class="left-pane-container"><div class="full-screen-sidebar" style="transform: translate3d(0px, 0px, 0px);"><div class="extra-sidebar-wrapper"><div class="sidebar-container"><ul class="sidebar-list"><li class="tab-item active"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/c-tutorial-strings/problem" data-attr2="Problem" data-attr3="full_screen" href="https://www.hackerrank.com/challenges/c-tutorial-strings/problem"><span class="ui-icon-label">Problem</span></a></li><li class="tab-item"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/c-tutorial-strings/submissions" data-attr2="Submissions" data-attr3="full_screen" href="https://www.hackerrank.com/challenges/c-tutorial-strings/submissions"><span class="ui-icon-label">Submissions</span></a></li><li class="tab-item"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/c-tutorial-strings/leaderboard" data-attr2="Leaderboard" data-attr3="full_screen" href="https://www.hackerrank.com/challenges/c-tutorial-strings/leaderboard"><span class="ui-icon-label">Leaderboard</span></a></li><li class="tab-item"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/c-tutorial-strings/forum" data-attr2="Discussions" data-attr3="full_screen" href="https://www.hackerrank.com/challenges/c-tutorial-strings/forum"><span class="ui-icon-label">Discussions</span></a></li></ul></div></div></div><div class="left-pane-content" style="transform: translate3d(0px, 0px, 0px);"><div id="fullScreenLeftPane" class="problem-statement-container"><div class="theme-m hr_tour-problem-statement problem-statement have-external-links"><div class="content-text challenge-text mlB hackdown-container theme-m"><div class="challenge-body-html"><div class="challenge_problem_statement"><div class="msB challenge_problem_statement_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>C++ provides a nice alternative data type to manipulate strings, and the data type is conveniently called <em>string</em>. Some of its widely used features are the following:</p>

<ul>
<li><p><em>Declaration:</em></p>

<pre><code>string a = "abc";
</code></pre></li>
<li><p><em>Size:</em> </p>

<pre><code>int len = a.size();
</code></pre></li>
<li><p><em>Concatenate two strings:</em></p>

<pre><code>string a = "abc";
string b = "def";
string c = a + b; // c = "abcdef".
</code></pre></li>
<li><p><em>Accessing <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="2.575ex" height="2.509ex" style="vertical-align: -0.338ex;" viewBox="0 -934.9 1108.8 1080.4" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M184 600Q184 624 203 642T247 661Q265 661 277 649T290 619Q290 596 270 577T226 557Q211 557 198 567T184 600ZM21 287Q21 295 30 318T54 369T98 420T158 442Q197 442 223 419T250 357Q250 340 236 301T196 196T154 83Q149 61 149 51Q149 26 166 26Q175 26 185 29T208 43T235 78T260 137Q263 149 265 151T282 153Q302 153 302 143Q302 135 293 112T268 61T223 11T161 -11Q129 -11 102 10T74 74Q74 91 79 106T122 220Q160 321 166 341T173 380Q173 404 156 404H154Q124 404 99 371T61 287Q60 286 59 284T58 281T56 279T53 278T49 278T41 278H27Q21 284 21 287Z"></path><g transform="translate(345,362)"><path stroke-width="1" transform="scale(0.707)" d="M26 385Q19 392 19 395Q19 399 22 411T27 425Q29 430 36 430T87 431H140L159 511Q162 522 166 540T173 566T179 586T187 603T197 615T211 624T229 626Q247 625 254 615T261 596Q261 589 252 549T232 470L222 433Q222 431 272 431H323Q330 424 330 420Q330 398 317 385H210L174 240Q135 80 135 68Q135 26 162 26Q197 26 230 60T283 144Q285 150 288 151T303 153H307Q322 153 322 145Q322 142 319 133Q314 117 301 95T267 48T216 6T155 -11Q125 -11 98 4T59 56Q57 64 57 83V101L92 241Q127 382 128 383Q128 385 77 385H26Z"></path><g transform="translate(255,0)"><path stroke-width="1" transform="scale(0.707)" d="M137 683Q138 683 209 688T282 694Q294 694 294 685Q294 674 258 534Q220 386 220 383Q220 381 227 388Q288 442 357 442Q411 442 444 415T478 336Q478 285 440 178T402 50Q403 36 407 31T422 26Q450 26 474 56T513 138Q516 149 519 151T535 153Q555 153 555 145Q555 144 551 130Q535 71 500 33Q466 -10 419 -10H414Q367 -10 346 17T325 74Q325 90 361 192T398 345Q398 404 354 404H349Q266 404 205 306L198 293L164 158Q132 28 127 16Q114 -11 83 -11Q69 -11 59 -2T48 16Q48 30 121 320L195 616Q195 629 188 632T149 637H128Q122 643 122 645T124 664Q129 683 137 683Z"></path></g></g></g></svg></span> element:</em></p>

<pre><code>string s = "abc";
char   c0 = s[0];   // c0 = 'a'
char   c1 = s[1];   // c1 = 'b'
char   c2 = s[2];   // c2 = 'c'

s[0] = 'z';         // s = "zbc"
</code></pre></li>
</ul>

<p><em>P.S.:</em> We will use <em>cin/cout</em> to read/write a string.</p></div></div></div><div class="challenge_input_format"><div class="msB challenge_input_format_title"><p><strong>Input Format</strong></p></div><div class="msB challenge_input_format_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>You are given two strings, <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.23ex" height="1.676ex" style="vertical-align: -0.338ex;" viewBox="0 -576.1 529.5 721.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path></g></svg></span> and <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-2-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="0.998ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 429.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path></g></svg></span>, separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').</p></div></div></div><div class="challenge_output_format"><div class="msB challenge_output_format_title"><p><strong>Output Format</strong></p></div><div class="msB challenge_output_format_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>In the first line print two space-separated integers, representing the length of <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.23ex" height="1.676ex" style="vertical-align: -0.338ex;" viewBox="0 -576.1 529.5 721.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path></g></svg></span> and <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-2-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="0.998ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 429.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path></g></svg></span> respectively. <br>
In the second line print the string produced by concatenating <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-3-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.23ex" height="1.676ex" style="vertical-align: -0.338ex;" viewBox="0 -576.1 529.5 721.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path></g></svg></span> and <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-4-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="0.998ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 429.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path></g></svg></span> (<span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-5-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="5.068ex" height="2.343ex" style="vertical-align: -0.505ex;" viewBox="0 -791.3 2181.9 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><g transform="translate(751,0)"><path stroke-width="1" d="M56 237T56 250T70 270H369V420L370 570Q380 583 389 583Q402 583 409 568V270H707Q722 262 722 250T707 230H409V-68Q401 -82 391 -82H389H387Q375 -82 369 -68V230H70Q56 237 56 250Z"></path></g><g transform="translate(1752,0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path></g></g></svg></span>). <br>
In the third line print two strings separated by a space, <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-6-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.915ex" height="2.343ex" style="vertical-align: -0.338ex;" viewBox="0 -863.1 824.3 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><g transform="translate(529,362)"><path stroke-width="1" transform="scale(0.707)" d="M79 43Q73 43 52 49T30 61Q30 68 85 293T146 528Q161 560 198 560Q218 560 240 545T262 501Q262 496 260 486Q259 479 173 263T84 45T79 43Z"></path></g></g></svg></span> and <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-7-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.682ex" height="2.343ex" style="vertical-align: -0.338ex;" viewBox="0 -863.1 724.3 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path><g transform="translate(429,362)"><path stroke-width="1" transform="scale(0.707)" d="M79 43Q73 43 52 49T30 61Q30 68 85 293T146 528Q161 560 198 560Q218 560 240 545T262 501Q262 496 260 486Q259 479 173 263T84 45T79 43Z"></path></g></g></svg></span>. <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-8-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.915ex" height="2.343ex" style="vertical-align: -0.338ex;" viewBox="0 -863.1 824.3 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><g transform="translate(529,362)"><path stroke-width="1" transform="scale(0.707)" d="M79 43Q73 43 52 49T30 61Q30 68 85 293T146 528Q161 560 198 560Q218 560 240 545T262 501Q262 496 260 486Q259 479 173 263T84 45T79 43Z"></path></g></g></svg></span> and <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-9-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.682ex" height="2.343ex" style="vertical-align: -0.338ex;" viewBox="0 -863.1 724.3 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path><g transform="translate(429,362)"><path stroke-width="1" transform="scale(0.707)" d="M79 43Q73 43 52 49T30 61Q30 68 85 293T146 528Q161 560 198 560Q218 560 240 545T262 501Q262 496 260 486Q259 479 173 263T84 45T79 43Z"></path></g></g></svg></span> are the same as <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-10-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.23ex" height="1.676ex" style="vertical-align: -0.338ex;" viewBox="0 -576.1 529.5 721.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path></g></svg></span> and <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-11-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="0.998ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 429.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path></g></svg></span>, respectively, except that their first characters are swapped.</p></div></div></div><div class="challenge_sample_input"><div class="msB challenge_sample_input_title"><p><strong>Sample Input</strong></p></div><div class="msB challenge_sample_input_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><pre><code>abcd
ef
</code></pre></div></div></div><div class="challenge_sample_output"><div class="msB challenge_sample_output_title"><p><strong>Sample Output</strong></p></div><div class="msB challenge_sample_output_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><pre><code>4 2
abcdef
ebcd af
</code></pre></div></div></div><div class="challenge_explanation"><div class="msB challenge_explanation_title"><p><strong>Explanation</strong></p></div><div class="msB challenge_explanation_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><ul>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="3.683ex" height="1.676ex" style="vertical-align: -0.338ex;" viewBox="0 -576.1 1585.8 721.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><g transform="translate(807,0)"><path stroke-width="1" d="M56 347Q56 360 70 367H707Q722 359 722 347Q722 336 708 328L390 327H72Q56 332 56 347ZM56 153Q56 168 72 173H708Q722 163 722 153Q722 140 707 133H70Q56 140 56 153Z"></path></g></g></svg></span> <em>"abcd"</em></li>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-2-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="3.451ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 1485.8 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path><g transform="translate(707,0)"><path stroke-width="1" d="M56 347Q56 360 70 367H707Q722 359 722 347Q722 336 708 328L390 327H72Q56 332 56 347ZM56 153Q56 168 72 173H708Q722 163 722 153Q722 140 707 133H70Q56 140 56 153Z"></path></g></g></svg></span> <em>"ef"</em></li>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-3-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="6.784ex" height="2.843ex" style="vertical-align: -0.838ex;" viewBox="0 -863.1 2921.1 1223.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M139 -249H137Q125 -249 119 -235V251L120 737Q130 750 139 750Q152 750 159 735V-235Q151 -249 141 -249H139Z"></path><g transform="translate(278,0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path></g><g transform="translate(808,0)"><path stroke-width="1" d="M139 -249H137Q125 -249 119 -235V251L120 737Q130 750 139 750Q152 750 159 735V-235Q151 -249 141 -249H139Z"></path></g><g transform="translate(1364,0)"><path stroke-width="1" d="M56 347Q56 360 70 367H707Q722 359 722 347Q722 336 708 328L390 327H72Q56 332 56 347ZM56 153Q56 168 72 173H708Q722 163 722 153Q722 140 707 133H70Q56 140 56 153Z"></path></g><g transform="translate(2420,0)"><path stroke-width="1" d="M462 0Q444 3 333 3Q217 3 199 0H190V46H221Q241 46 248 46T265 48T279 53T286 61Q287 63 287 115V165H28V211L179 442Q332 674 334 675Q336 677 355 677H373L379 671V211H471V165H379V114Q379 73 379 66T385 54Q393 47 442 46H471V0H462ZM293 211V545L74 212L183 211H293Z"></path></g></g></svg></span></li>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-4-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="6.552ex" height="2.843ex" style="vertical-align: -0.838ex;" viewBox="0 -863.1 2821.1 1223.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M139 -249H137Q125 -249 119 -235V251L120 737Q130 750 139 750Q152 750 159 735V-235Q151 -249 141 -249H139Z"></path><g transform="translate(278,0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path></g><g transform="translate(708,0)"><path stroke-width="1" d="M139 -249H137Q125 -249 119 -235V251L120 737Q130 750 139 750Q152 750 159 735V-235Q151 -249 141 -249H139Z"></path></g><g transform="translate(1264,0)"><path stroke-width="1" d="M56 347Q56 360 70 367H707Q722 359 722 347Q722 336 708 328L390 327H72Q56 332 56 347ZM56 153Q56 168 72 173H708Q722 163 722 153Q722 140 707 133H70Q56 140 56 153Z"></path></g><g transform="translate(2320,0)"><path stroke-width="1" d="M109 429Q82 429 66 447T50 491Q50 562 103 614T235 666Q326 666 387 610T449 465Q449 422 429 383T381 315T301 241Q265 210 201 149L142 93L218 92Q375 92 385 97Q392 99 409 186V189H449V186Q448 183 436 95T421 3V0H50V19V31Q50 38 56 46T86 81Q115 113 136 137Q145 147 170 174T204 211T233 244T261 278T284 308T305 340T320 369T333 401T340 431T343 464Q343 527 309 573T212 619Q179 619 154 602T119 569T109 550Q109 549 114 549Q132 549 151 535T170 489Q170 464 154 447T109 429Z"></path></g></g></svg></span></li>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-5-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="7.521ex" height="2.343ex" style="vertical-align: -0.505ex;" viewBox="0 -791.3 3238.2 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><g transform="translate(751,0)"><path stroke-width="1" d="M56 237T56 250T70 270H369V420L370 570Q380 583 389 583Q402 583 409 568V270H707Q722 262 722 250T707 230H409V-68Q401 -82 391 -82H389H387Q375 -82 369 -68V230H70Q56 237 56 250Z"></path></g><g transform="translate(1752,0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path></g><g transform="translate(2459,0)"><path stroke-width="1" d="M56 347Q56 360 70 367H707Q722 359 722 347Q722 336 708 328L390 327H72Q56 332 56 347ZM56 153Q56 168 72 173H708Q722 163 722 153Q722 140 707 133H70Q56 140 56 153Z"></path></g></g></svg></span> <em>"abcdef"</em></li>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-6-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="4.368ex" height="2.343ex" style="vertical-align: -0.338ex;" viewBox="0 -863.1 1880.6 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><g transform="translate(529,362)"><path stroke-width="1" transform="scale(0.707)" d="M79 43Q73 43 52 49T30 61Q30 68 85 293T146 528Q161 560 198 560Q218 560 240 545T262 501Q262 496 260 486Q259 479 173 263T84 45T79 43Z"></path></g><g transform="translate(1102,0)"><path stroke-width="1" d="M56 347Q56 360 70 367H707Q722 359 722 347Q722 336 708 328L390 327H72Q56 332 56 347ZM56 153Q56 168 72 173H708Q722 163 722 153Q722 140 707 133H70Q56 140 56 153Z"></path></g></g></svg></span> <em>"ebcd"</em></li>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-7-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="4.136ex" height="2.343ex" style="vertical-align: -0.338ex;" viewBox="0 -863.1 1780.6 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path><g transform="translate(429,362)"><path stroke-width="1" transform="scale(0.707)" d="M79 43Q73 43 52 49T30 61Q30 68 85 293T146 528Q161 560 198 560Q218 560 240 545T262 501Q262 496 260 486Q259 479 173 263T84 45T79 43Z"></path></g><g transform="translate(1002,0)"><path stroke-width="1" d="M56 347Q56 360 70 367H707Q722 359 722 347Q722 336 708 328L390 327H72Q56 332 56 347ZM56 153Q56 168 72 173H708Q722 163 722 153Q722 140 707 133H70Q56 140 56 153Z"></path></g></g></svg></span> <em>"af"</em></li>
</ul></div></div></div></div></div></div></div></div></div></div><div class="gutter gutter-horizontal" style="width: 12px;"></div><div class="fs-right-pane" style="width: calc(55.5% - 6px);"><div class="challenge-page-wrap theme-m-content"><section class="code-editor-section split"><div><div><div></div><div class="hr-monaco-editor-wrapper"><div class="hr-monaco-editor-with-input"><div><div class="hr-monaco-editor-with-statusbar"><div class="hr-monaco-editor"><div class="editor-toolbar"><div class="toolbar-left"></div><div class="toolbar-right"><div class="toolbar-custom-items"><div class="theme-change-wrapper"><div class="dropdown"><div aria-haspopup="menu" aria-expanded="false" class="dropdown-handle theme-change-handle"><span class="text-link">Change Theme</span></div></div></div></div><label class="select-language__label" id="select-language-label" for="select-language-input" aria-label="Select Your Coding Language">Language</label><div class="custom-select  select-language"><div class=" css-2b097c-container"><div class=" css-1fv400i-control"><div class=" css-1hwfws3"><div class=" css-ki0glp">C++11</div><div class="css-1j2eamm"><div class="" style="display: inline-block;"><input autocapitalize="none" autocomplete="off" autocorrect="off" id="select-language-input" spellcheck="false" tabindex="0" type="text" aria-autocomplete="list" aria-labelledby="select-language-label" role="combobox" aria-owns="select-language-menu" aria-expanded="false" value="" style="box-sizing: content-box; width: 2px; background: 0px center; border: 0px; font-size: inherit; opacity: 1; outline: 0px; padding: 0px; color: inherit;"><div style="position: absolute; top: 0px; left: 0px; visibility: hidden; height: 0px; overflow: scroll; white-space: pre; font-size: 14px; font-family: sans-serif; font-weight: 400; font-style: normal; letter-spacing: normal; text-transform: none;"></div></div></div></div><div class=" css-1wy0on6"><span class=" css-wp5ouw-indicatorSeparator"></span><div aria-hidden="true" class=" css-84jzhn-indicatorContainer"><svg height="20" width="20" viewBox="0 0 20 20" aria-hidden="true" focusable="false" class="css-19bqh2r"><path d="M4.516 7.548c0.436-0.446 1.043-0.481 1.576 0l3.908 3.747 3.908-3.747c0.533-0.481 1.141-0.446 1.574 0 0.436 0.445 0.408 1.197 0 1.615-0.406 0.418-4.695 4.502-4.695 4.502-0.217 0.223-0.502 0.335-0.787 0.335s-0.57-0.112-0.789-0.335c0 0-4.287-4.084-4.695-4.502s-0.436-1.17 0-1.615z"></path></svg></div></div></div></div></div><div class="toolbar-custom-items"><div class="hr-monaco-reset-code"><button class="ui-btn ui-btn-normal cursor reset-btn ui-btn-styled" title="Reset Code" type="button"><div class="ui-content align-icon-right"><span class="ui-text" aria-hidden="false"><svg viewBox="0 0 48 48" width="1em" height="1em" class="icon-grey reset-code-icon ui-svg-icon" fill="currentColor"><path d="M40 8.9C31.7.1 17.7-.3 8.9 8L5.7 4.9c-.4-.4-.9-.7-1.5-.7C3 4.2 2 5.2 2 6.4v8.8c0 1.2 1 2.2 2.2 2.2H13c.6 0 1.2-.2 1.6-.7.9-.9.8-2.3 0-3.1L12 11.1c3.3-3 7.5-4.7 12-4.7 9.7 0 17.6 7.9 17.6 17.6S33.7 41.6 24 41.6c-9.7 0-17.6-7.9-17.6-17.6 0-1.2-1-2.2-2.2-2.2C3 21.8 2 22.8 2 24c0 5.6 2.1 11 6 15.1 8.3 8.8 22.3 9.3 31.1.9 8.8-8.3 9.2-22.3.9-31.1z"></path><path d="M26.6 31.4c.4.4.9.6 1.4.6s1-.2 1.4-.6l6-6c.8-.8.8-2 0-2.8l-6-6c-.8-.8-2-.8-2.8 0-.8.8-.8 2 0 2.8l4.6 4.6-4.6 4.6c-.8.8-.8 2 0 2.8zm-5.2-14.8c-.8-.8-2-.8-2.8 0l-6 6c-.8.8-.8 2 0 2.8l6 6c.4.4.9.6 1.4.6s1-.2 1.4-.6c.8-.8.8-2 0-2.8L16.8 24l4.6-4.6c.8-.8.8-2 0-2.8z"></path></svg></span></div></button></div><div class="fullscreen-btn-wrapper"><div class="ui-tooltip-wrapper"><div data-automation="icon-wrapper" aria-describedby=" tooltip-10"><button class="ui-btn ui-btn-normal restorefullscreen fullscreen-btn no-select active-link hr-monaco-base-btn ui-btn-styled" title="Switch to Normal layout" data-original-title="Switch to Normal layout"><div class="ui-content align-icon-right"><span class="ui-text" aria-hidden="false"><svg viewBox="0 0 100 100" width="1em" height="1em" class="minimize-icon icon-grey no-select ui-svg-icon" fill="currentColor"><path d="M94.59 5.41a3 3 0 00-4.24 0L67.82 27.94 66 11.21a3 3 0 10-6 .65l2.5 22.95v.36a3 3 0 00.09.31c0 .07.05.14.08.21a3 3 0 00.16.31l.1.17a3 3 0 00.79.79l.17.1.31.17.21.08.31.09h.36L88.14 40h.33a3 3 0 00.32-6l-16.73-1.82L94.59 9.66a3 3 0 000-4.25zM91.45 62.7a3 3 0 00-3.31-2.7l-22.95 2.5h-.36l-.31.09-.21.08-.32.17-.17.1a3 3 0 00-.79.79l-.1.17a3 3 0 00-.16.31c0 .07-.06.14-.08.21a3 3 0 00-.09.31v.36L60 88.14a3 3 0 002.66 3.31h.33a3 3 0 003-2.68l1.82-16.72 22.53 22.54a3 3 0 004.24-4.24L72.06 67.82 88.79 66a3 3 0 002.66-3.3zM5.41 9.66l22.53 22.52L11.21 34a3 3 0 00.32 6h.33l22.95-2.5h.36l.31-.09.21-.08.31-.17.17-.1a3 3 0 00.79-.79l.1-.17a3 3 0 00.16-.31c0-.07.06-.14.08-.21a3 3 0 00.09-.31v-.36L40 11.86a3 3 0 10-6-.65l-1.82 16.73L9.66 5.41a3 3 0 00-4.25 4.25zm0 84.93a3 3 0 004.24 0l22.53-22.53L34 88.79a3 3 0 003 2.68h.33A3 3 0 0040 88.14l-2.5-22.95v-.36a3 3 0 00-.09-.31c0-.07-.05-.14-.08-.21a3 3 0 00-.16-.31l-.1-.17a3 3 0 00-.79-.79l-.17-.1-.31-.17-.21-.08-.31-.09h-.36L11.86 60a3 3 0 00-.65 6l16.73 1.82L5.41 90.34a3 3 0 000 4.25z"></path></svg></span></div></button></div></div></div></div><div class="hr-monaco-settings-editor"><button class="ui-icon-btn ui-btn-normal settings-toggle" tabindex="0" aria-haspopup="true" aria-expanded="false" aria-label="Editor Settings" title="Editor Settings"><span class="sr-only">More</span><svg viewBox="0 0 36 36" width="1em" height="1em" aria-hidden="true" focusable="false" class=" ui-svg-icon" fill="currentColor"><path d="M18 0c2.2 0 4 1.8 4 4s-1.8 4-4 4-4-1.8-4-4 1.8-4 4-4zm0 14c2.2 0 4 1.8 4 4s-1.8 4-4 4-4-1.8-4-4 1.8-4 4-4zm0 14c2.2 0 4 1.8 4 4s-1.8 4-4 4-4-1.8-4-4 1.8-4 4-4z" fill-rule="evenodd" clip-rule="evenodd"></path></svg></button></div></div></div><div class="hr-monaco-editor-parent"><div class="hr-monaco-base-editor" data-keybinding-context="2" data-mode-id="cpp" style="height: 411px; --codelens-font-features_ee1f62: &quot;liga&quot; off, &quot;calt&quot; off;"><div class="monaco-editor no-user-select  showUnused showDeprecated vs" role="code" data-uri="file:///lsp-e7599e10-cadc-11ee-88e2-8df926cdef83/Solution.cpp" style="width: 725px; height: 411px;"><div data-mprt="3" class="overflow-guard" style="width: 725px; height: 411px;"><div class="margin" role="presentation" aria-hidden="true" style="position: absolute; transform: translate3d(0px, 0px, 0px); contain: strict; top: 0px; height: 500px; width: 71px;"><div class="glyph-margin" style="left: 0px; width: 0px; height: 500px;"></div><div class="margin-view-zones" role="presentation" aria-hidden="true" style="position: absolute;"></div><div class="margin-view-overlays" role="presentation" aria-hidden="true" style="position: absolute; width: 71px; font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; font-feature-settings: &quot;liga&quot; 0, &quot;calt&quot; 0; line-height: 20px; letter-spacing: 0px; height: 500px;"><div style="position:absolute;top:80px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">5</div></div><div style="position:absolute;top:100px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">6</div></div><div style="position:absolute;top:120px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">7</div></div><div style="position:absolute;top:140px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">8</div></div><div style="position:absolute;top:160px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">9</div></div><div style="position:absolute;top:180px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">10</div></div><div style="position:absolute;top:200px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">11</div></div><div style="position:absolute;top:220px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">12</div></div><div style="position:absolute;top:240px;width:100%;height:20px;"><div class="current-line current-line-margin-both" style="width:71px; height:20px;"></div><div class="cldr alwaysShowFoldIcons codicon codicon-folding-expanded" style="left:45px;width:26px;"></div><div class="active-line-number line-numbers" style="left:0px;width:45px;">13</div></div><div style="position:absolute;top:260px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">14</div></div><div style="position:absolute;top:280px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">15</div></div><div style="position:absolute;top:300px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">16</div></div><div style="position:absolute;top:320px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">17</div></div><div style="position:absolute;top:340px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">18</div></div><div style="position:absolute;top:360px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">19</div></div><div style="position:absolute;top:380px;width:100%;height:20px;"><div class="cldr alwaysShowFoldIcons codicon codicon-folding-expanded" style="left:45px;width:26px;"></div><div class="line-numbers" style="left:0px;width:45px;">20</div></div><div style="position:absolute;top:400px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">21</div></div><div style="position:absolute;top:20px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">2</div></div><div style="position:absolute;top:40px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">3</div></div><div style="position:absolute;top:60px;width:100%;height:20px;"><div class="cldr alwaysShowFoldIcons codicon codicon-folding-expanded" style="left:45px;width:26px;"></div><div class="line-numbers" style="left:0px;width:45px;">4</div></div><div style="position:absolute;top:0px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">1</div></div></div></div><div class="monaco-scrollable-element editor-scrollable vs" role="presentation" data-mprt="5" style="position: absolute; overflow: hidden; left: 71px; height: 411px; width: 654px;"><div class="lines-content monaco-editor-background" style="position: absolute; overflow: hidden; width: 1e+06px; height: 1e+06px; transform: translate3d(0px, 0px, 0px); contain: strict; top: 0px; left: 0px;"><div class="view-overlays" role="presentation" aria-hidden="true" style="position: absolute; height: 0px; width: 654px;"><div style="position:absolute;top:80px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:100px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:120px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:140px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:160px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:180px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:200px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:220px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:240px;width:100%;height:20px;"><div class="current-line" style="width:654px; height:20px;"></div><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:260px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:280px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:300px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:320px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:340px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:360px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:380px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:400px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:20px;width:100%;height:20px;"></div><div style="position:absolute;top:40px;width:100%;height:20px;"></div><div style="position:absolute;top:60px;width:100%;height:20px;"><div class="cdr bracket-match" style="left:99px;width:9px;height:20px;"></div></div><div style="position:absolute;top:0px;width:100%;height:20px;"></div></div><div role="presentation" aria-hidden="true" class="view-rulers"></div><div class="view-zones" role="presentation" aria-hidden="true" style="position: absolute;"></div><div class="view-lines monaco-mouse-cursor-text" role="presentation" aria-hidden="true" data-mprt="7" style="position: absolute; font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; font-feature-settings: &quot;liga&quot; 0, &quot;calt&quot; 0; line-height: 20px; letter-spacing: 0px; width: 654px; height: 500px;"><div style="top:80px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;string&nbsp;a;</span></span></div><div style="top:100px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;string&nbsp;b;</span></span></div><div style="top:120px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;</span></span></div><div style="top:140px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;cin&gt;&gt;a;</span></span></div><div style="top:160px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;cin&gt;&gt;b;</span></span></div><div style="top:180px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span></span></div><div style="top:200px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk7">int</span><span class="mtk1">&nbsp;len_a&nbsp;=&nbsp;a.size();</span></span></div><div style="top:220px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk7">int</span><span class="mtk1">&nbsp;len_b&nbsp;=&nbsp;b.size();</span></span></div><div style="top:240px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;cout&nbsp;&lt;&lt;&nbsp;len_a&nbsp;&lt;&lt;&nbsp;</span><span class="mtk23">"&nbsp;"</span><span class="mtk1">&nbsp;&lt;&lt;&nbsp;len_b&nbsp;&lt;&lt;&nbsp;endl;</span></span></div><div style="top:260px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;string&nbsp;c=a+b;</span></span></div><div style="top:280px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;cout&nbsp;&lt;&lt;&nbsp;c&nbsp;&lt;&lt;&nbsp;endl;</span></span></div><div style="top:300px;height:20px;" class="view-line"><span><span></span></span></div><div style="top:320px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;</span></span></div><div style="top:340px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;</span><span class="mtk7">int</span><span class="mtk1">&nbsp;temp&nbsp;=a[</span><span class="mtk9">0</span><span class="mtk1">];</span></span></div><div style="top:360px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;a[</span><span class="mtk9">0</span><span class="mtk1">]=b[</span><span class="mtk9">0</span><span class="mtk1">];</span></span></div><div style="top:380px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;b[</span><span class="mtk9">0</span><span class="mtk1">]=temp;</span></span></div><div style="top:400px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;cout&nbsp;&lt;&lt;&nbsp;a&nbsp;&lt;&lt;&nbsp;</span><span class="mtk23">"&nbsp;"</span><span class="mtk1">&nbsp;&lt;&lt;&nbsp;b&nbsp;&lt;&lt;endl;</span></span></div><div style="top:20px;height:20px;" class="view-line"><span><span class="mtk7">#include</span><span class="mtk1">&nbsp;</span><span class="mtk7 detected-link">&lt;</span><span class="mtk23 detected-link">string</span><span class="mtk7 detected-link">&gt;</span></span></div><div style="top:40px;height:20px;" class="view-line"><span><span class="mtk7">using</span><span class="mtk1">&nbsp;</span><span class="mtk7">namespace</span><span class="mtk1">&nbsp;std;</span></span></div><div style="top:60px;height:20px;" class="view-line"><span><span class="mtk7">int</span><span class="mtk1">&nbsp;main()&nbsp;{</span></span></div><div style="top:0px;height:20px;" class="view-line"><span><span class="mtk7">#include</span><span class="mtk1">&nbsp;</span><span class="mtk7 detected-link">&lt;</span><span class="mtk23 detected-link">iostream</span><span class="mtk7 detected-link">&gt;</span></span></div></div><div data-mprt="1" class="contentWidgets" style="position: absolute; top: 0px;"></div><div role="presentation" aria-hidden="true" class="cursors-layer cursor-line-style cursor-solid"><div class="cursor monaco-mouse-cursor-text " style="height: 20px; top: 240px; left: 368px; font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; font-feature-settings: &quot;liga&quot; 0, &quot;calt&quot; 0; line-height: 20px; letter-spacing: 0px; display: block; visibility: hidden; width: 2px;"></div></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal" style="position: absolute; width: 640px; height: 12px; left: 0px; bottom: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 12px; transform: translate3d(0px, 0px, 0px); contain: strict; width: 640px;"></div></div><canvas class="decorationsOverviewRuler" aria-hidden="true" width="14" height="411" style="position: absolute; transform: translate3d(0px, 0px, 0px); contain: strict; top: 0px; right: 0px; width: 14px; height: 411px;"></canvas><div role="presentation" aria-hidden="true" class="invisible scrollbar vertical fade" style="position: absolute; width: 14px; height: 411px; right: 0px; top: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; width: 14px; transform: translate3d(0px, 0px, 0px); contain: strict; height: 337px;"></div></div></div><div role="presentation" aria-hidden="true" class="" style="width: 725px;"></div><textarea data-mprt="6" class="inputarea monaco-mouse-cursor-text" wrap="off" autocorrect="off" autocapitalize="off" autocomplete="off" spellcheck="false" aria-label="Editor content;Press Alt+F1 for Accessibility Options." tabindex="0" role="textbox" aria-roledescription="editor" aria-multiline="true" aria-haspopup="false" aria-autocomplete="both" style="font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; font-feature-settings: &quot;liga&quot; 0, &quot;calt&quot; 0; line-height: 20px; letter-spacing: 0px; top: 240px; left: 440px; width: 1px; height: 1px;"></textarea><div class="monaco-editor-background textAreaCover line-numbers" style="position: absolute; top: 0px; left: 0px; width: 0px; height: 0px;"></div><div data-mprt="4" class="overlayWidgets" style="width: 725px;"><div class="accessibilityHelpWidget" role="dialog" aria-hidden="true" widgetid="editor.contrib.accessibilityHelpWidget" style="display: none; position: absolute;"><div role="document"></div></div><div widgetid="editor.contrib.quickInputWidget" style="position: absolute; top: 0px; right: 50%;"></div></div><div data-mprt="8" class="minimap slider-mouseover" role="presentation" aria-hidden="true" style="position: absolute; left: 0px; width: 0px; height: 411px;"><div class="minimap-shadow-hidden" style="height: 411px;"></div><canvas width="0" height="411" style="position: absolute; left: 0px; width: 0px; height: 411px;"></canvas><canvas class="minimap-decorations-layer" width="0" height="411" style="position: absolute; left: 0px; width: 0px; height: 411px;"></canvas><div class="minimap-slider" style="position: absolute; transform: translate3d(0px, 0px, 0px); contain: strict; width: 0px;"><div class="minimap-slider-horizontal" style="position: absolute; width: 0px; height: 0px;"></div></div></div></div><div data-mprt="2" class="overflowingContentWidgets"><div class="monaco-editor rename-box" widgetid="__renameInputWidget" style="background-color: rgb(243, 243, 243); box-shadow: rgba(0, 0, 0, 0.16) 0px 0px 8px 2px; color: rgb(97, 97, 97); position: absolute; visibility: hidden; max-width: 1366px;"><input class="rename-input" type="text" aria-label="Rename input. Type new name and press Enter to commit." style="font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; background-color: rgb(255, 255, 255); border-width: 0px; border-style: none;"><div class="rename-label" style="font-size: 12px;">Enter to Rename, Shift+Enter to Preview</div></div><div class="monaco-hover hidden" tabindex="0" role="tooltip" widgetid="editor.contrib.modesContentHoverWidget" style="position: absolute; visibility: hidden; max-width: 1366px; top: 160px; left: 170px;"><div class="monaco-scrollable-element " role="presentation" style="position: relative; overflow: hidden;"><div class="monaco-hover-content" style="overflow: hidden; font-size: 15px; line-height: 20px; max-height: 250px; max-width: 500px;"><div class="hover-row markdown-hover"><div class="hover-contents code-hover-contents"><div><h3>variable <code>c</code></h3>
<hr>
<p>Type: <code>string (aka basic_string&lt;char&gt;)</code>  </p><hr>
<div class="code" data-code="id#36" style="font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; font-feature-settings: &quot;liga&quot; 0, &quot;calt&quot; 0; line-height: 20px; letter-spacing: 0px;"><span style="font-family: SourceCodePro, monospace;"><div class="monaco-tokenized-source"><span class="mtk9">// In main</span><br><span class="mtk1">string c = a + b</span></div></span></div></div></div></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal" style="position: absolute; width: 315px; height: 10px; left: 0px; bottom: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 10px; transform: translate3d(0px, 0px, 0px); contain: strict; width: 315px;"></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar vertical" style="position: absolute; width: 10px; height: 100px; right: 0px; top: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; width: 10px; transform: translate3d(0px, 0px, 0px); contain: strict; height: 100px;"></div></div><div class="shadow"></div><div class="shadow"></div><div class="shadow"></div></div></div><div class="editor-widget suggest-widget" widgetid="editor.widget.suggestWidget" style="background-color: rgb(243, 243, 243); border-color: rgb(200, 200, 200); position: absolute; visibility: hidden; max-width: 1366px; height: 22px; width: 430px; top: 120px; left: 161px;"><div class="monaco-sash vertical" style="left: 428px;"></div><div class="monaco-sash vertical disabled" style="left: -2px;"></div><div class="monaco-sash orthogonal-edge-north horizontal disabled" style="top: -2px;"><div class="orthogonal-drag-handle end"></div></div><div class="monaco-sash orthogonal-edge-south horizontal" style="top: 20px;"><div class="orthogonal-drag-handle end"></div></div><div class="message" aria-hidden="true" style="background-color: rgb(243, 243, 243); border-color: rgb(200, 200, 200); display: none;"></div><div class="tree" aria-hidden="true" style="height: 22px; display: none;"><div class="monaco-list list_id_2 selection-none" tabindex="0" role="listbox" aria-label="Suggest" aria-multiselectable="true"><div class="monaco-scrollable-element " role="presentation" style="position: relative; overflow: hidden;"><div class="monaco-list-rows" style="transform: translate3d(0px, 0px, 0px); overflow: hidden; height: 0px; left: 0px; top: 0px;"></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal" style="position: absolute; width: 0px; height: 10px; left: 0px; bottom: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 10px; transform: translate3d(0px, 0px, 0px); contain: strict; width: 0px;"></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar vertical fade" style="position: absolute; width: 10px; height: 22px; right: 0px; top: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; width: 10px; transform: translate3d(0px, 0px, 0px); contain: strict; height: 22px;"></div></div></div><style type="text/css" media="screen">.monaco-list.list_id_2:focus .monaco-list-row.selected { background-color: #0060c0; }
.monaco-list.list_id_2:focus .monaco-list-row.selected:hover { background-color: #0060c0; }
.monaco-list.list_id_2:focus .monaco-list-row.selected { color: #ffffff; }

				.monaco-drag-image,
				.monaco-list.list_id_2:focus .monaco-list-row.selected.focused { background-color: #0060c0; }
			

				.monaco-drag-image,
				.monaco-list.list_id_2:focus .monaco-list-row.selected.focused { color: #ffffff; }
			
.monaco-list.list_id_2 .monaco-list-row.focused { background-color:  #0060c0; }
.monaco-list.list_id_2 .monaco-list-row.focused:hover { background-color:  #0060c0; }
.monaco-list.list_id_2 .monaco-list-row.selected { background-color:  #e4e6f1; }
.monaco-list.list_id_2 .monaco-list-row.selected:hover { background-color:  #e4e6f1; }
.monaco-list.list_id_2:not(.drop-target) .monaco-list-row:hover:not(.selected):not(.focused) { background-color: #f0f0f0; }

				.monaco-drag-image,
				.monaco-list.list_id_2:focus .monaco-list-row.focused { outline: 1px solid #0090f1; outline-offset: -1px; }
			

				.monaco-list.list_id_2.drop-target,
				.monaco-list.list_id_2 .monaco-list-rows.drop-target,
				.monaco-list.list_id_2 .monaco-list-row.drop-target { background-color: #d6ebff !important; color: inherit !important; }
			
.monaco-list-type-filter { background-color: #efc1ad }
.monaco-list-type-filter { border: 1px solid rgba(0, 0, 0, 0); }
.monaco-list-type-filter.no-matches { border: 1px solid #be1100; }
.monaco-list-type-filter { box-shadow: 1px 1px 1px rgba(0, 0, 0, 0.16); }

				.monaco-table:hover > .monaco-split-view2,
				.monaco-table:hover > .monaco-split-view2 .monaco-sash.vertical::before {
					border-color: rgba(97, 97, 97, 0.13);
			}</style></div></div><div class="suggest-status-bar" aria-hidden="true" style="border-top-color: rgb(200, 200, 200); line-height: 20px; display: none;"><div class="monaco-action-bar animated left"><ul class="actions-container" role="toolbar"><li class="action-item menu-entry" role="presentation"><a class="action-label" role="button" title="Insert (Enter)" tabindex="0">Insert (⏎)</a></li></ul></div><div class="monaco-action-bar animated right"><ul class="actions-container" role="toolbar"><li class="action-item menu-entry" role="presentation"><a class="action-label" role="button" title="show more (Ctrl+Space)" tabindex="0">show more (Ctrl+Space)</a></li></ul></div></div></div></div><div class="context-view" aria-hidden="true" style="display: none;"></div></div></div></div></div><div class="hr-monaco-editor-statusbar"><div style="display: flex;"></div><div class="statusbar-position">Line: 13 Col: 42</div></div></div><div class="pmR pmL pmB plT run-code-wrapper"><button class="ui-btn ui-btn-normal ui-btn-primary pull-right hr-monaco-submit ui-btn-styled"><div class="ui-content align-icon-right"><span class="ui-text" aria-hidden="false">Submit Code</span></div></button><button class="ui-btn ui-btn-normal ui-btn-secondary pull-right msR hr-monaco-compile hr-monaco__run-code ui-btn-styled"><div class="ui-content align-icon-right"><span class="ui-text" aria-hidden="false">Run Code</span></div></button></div></div><div class="pmR pmL pmB hr-monaco-custom-input-wrapper flex"><div><button class="ui-btn ui-btn-normal ui-btn-secondary upload-file mlR ui-btn-styled" data-analytics="Upload File" type="button"><div class="ui-content align-icon-right"><span class="ui-text" aria-hidden="false"><i class="icon-upload ui-icon-upload"></i>Upload Code as File</span></div></button></div><div class="checkBoxWrapper"><div class="ui-checkbox theme-m"><label class="label-wrap"><div class="checkbox-wrap"><input type="checkbox" class="checkbox-input"><span class="custom-holder inset"><svg viewBox="0 0 24 24" width="1em" height="1em" class="checkbox__check-icon ui-svg-icon" fill="currentColor"><path d="M9 18c-.3 0-.5-.1-.7-.3l-5-5c-.4-.4-.4-1 0-1.4s1-.4 1.4 0L9 15.6 19.3 5.3c.4-.4 1-.4 1.4 0s.4 1 0 1.4l-11 11c-.2.2-.4.3-.7.3z"></path></svg></span></div><div class="label">Test against custom input</div></label></div></div></div></div></div></div></div><div class="challenge-response fs-container"><div class="output-area-wrap"><div class="output-area mlT psT" id="output-area"><div class="submission-status theme-m-content"><div class="challenge-submission-wrapper"><div class="congrats-wrapper"><div><div class="submission-progress-bar justify-content-between align-items-center"><div class="submission-badge-wrapper"><div location="[object Object]" params="[object Object]" router="[object Object]" additionalcontext="[object Object]" class="ui-badge level-bronze"><div class="ui-badge-wrap"><svg viewBox="0 0 91 100" class="hexagon has-shadow"><g><defs><lineargradient id="badge-bronze-gradient" x1="52.5" y1="2.5" x2="52.5" y2="102.5" gradientUnits="userSpaceOnUse"><stop offset="0" stop-color="#ffc5ab"></stop><stop offset="1" stop-color="#ffa38a"></stop></lineargradient></defs><path fill="url(#badge-bronze-gradient)" d="M90.3892 44.9106L90.3893 44.914C90.5873 51.9976 90.3892 59.5788 89.8948 65.4581L89.8947 65.4581L89.894 65.4684C89.7459 67.8071 89.5241 69.8644 89.2548 71.4803C88.9812 73.1224 88.6689 74.2376 88.3726 74.7495L88.3684 74.7569L88.3644 74.7644C88.2249 75.0255 87.9549 75.366 87.5388 75.7853C87.1279 76.1994 86.5969 76.6683 85.9594 77.1872C84.6848 78.2247 83.011 79.4407 81.0792 80.7886C76.1371 84.1752 69.4065 88.1657 62.9661 91.6605L62.9645 91.6614C58.9514 93.8584 55.1183 95.8269 51.996 97.2447C50.4343 97.9539 49.0577 98.522 47.9293 98.9118C46.7841 99.3074 45.9476 99.5 45.4429 99.5C44.8368 99.5 43.7518 99.219 42.2485 98.6583C40.7685 98.1063 38.9475 97.3088 36.9015 96.3316C32.811 94.3779 27.849 91.7188 22.9696 88.9044C18.0901 86.09 13.3015 83.125 9.55688 80.5609C7.68397 79.2784 6.07847 78.1005 4.85537 77.0948C3.6188 76.0781 2.82774 75.2805 2.51554 74.7536C2.28519 74.3275 2.0493 73.5182 1.82917 72.3438C1.61115 71.1807 1.41751 69.7122 1.25082 68.0137C0.917563 64.6178 0.694767 60.3313 0.595718 55.7891L0.595639 55.7862C0.39748 48.597 0.496929 40.7167 0.991039 34.7412L0.991144 34.7412L0.991781 34.7309C1.13992 32.3423 1.36172 30.2598 1.63112 28.6185C1.90193 26.9685 2.21232 25.8224 2.51467 25.2483C2.86854 24.6758 3.67611 23.8504 4.9172 22.8226C6.15287 21.7992 7.77552 20.6094 9.70207 19.315L9.70402 19.3137C14.5518 16.0235 21.0868 12.0319 27.3246 8.63924L27.3247 8.63927L27.3296 8.63653C31.4393 6.34112 35.4202 4.29812 38.6657 2.83059C40.2891 2.09658 41.7217 1.5096 42.8908 1.10715C44.0779 0.698497 44.9386 0.5 45.4429 0.5C45.8599 0.5 46.5131 0.630344 47.3938 0.904038C48.2627 1.17405 49.3131 1.57058 50.508 2.07336C52.8947 3.07763 55.8302 4.49415 58.9957 6.13884L76.0424 15.9271C79.2093 17.9719 82.072 19.9123 84.2641 21.5505C85.3617 22.3708 86.285 23.1108 86.9918 23.7467C87.708 24.391 88.1652 24.8965 88.372 25.2495C88.6251 25.6975 88.8797 26.5434 89.1143 27.7675C89.346 28.9765 89.5489 30.5006 89.7217 32.2614C90.0674 35.7817 90.2902 40.2179 90.3892 44.9106Z" stroke="#bd6e52"></path></g><image class="badge-icon" xlink:href="https://hrcdn.net/fcore/assets/badges/cpp-739b350881.svg" x="50%" y="22" height="27" width="27" transform="translate(-13.5, 0)"></image><text class="badge-title" x="50%" y="65.5" font-size="10">CPP</text><g class="star-section" transform="translate(-3.5, 0)"><svg x="50%" y="71" height="10"><svg class="badge-star" viewBox="0 0 6.54904 6.25825" width="7" x="0"><path class="star" d="M55.51425,77.01983l-1.89417-.275-.84833-1.7175a.299.299,0,0,0-.27167-.16917.3245.3245,0,0,0-.2725.16917l-.305.61833-.5425,1.09916-.51417.075-1.38.2a.30333.30333,0,0,0-.18583.10083.33411.33411,0,0,0-.045.06833.35631.35631,0,0,0-.02417.07667.34087.34087,0,0,0-.005.04083.3038.3038,0,0,0,.02417.13417.33341.33341,0,0,0,.06667.0975l1.37167,1.33667-.2875,1.67167-.03667.21417c-.00167.01-.00167.02-.0025.02917l-.00167.0175a.26453.26453,0,0,0,.00167.04417.30489.30489,0,0,0,.44417.22917l1.69417-.89,1.69416.89a.30352.30352,0,0,0,.44084-.32L54.31175,78.874l1.37083-1.33667a.30339.30339,0,0,0-.16833-.5175" transform="translate(-49.22548 -74.85817)"></path></svg></svg></g></svg></div></div></div><div class="wrap-progress-text"><div class="earned-points">You have earned 10.00 points!</div><div class="points-left">You are now 20 points away from the 2nd star for your c++ badge.</div></div><div class="wrap-progress-bar"><div class="ui-progress-bar progress-bar theme-m"><div class="progress-filler" style="width: 33%;"></div></div><div class="progress-count text-content"><span class="percentage">33%</span><span class="points-remaining">20/40</span></div></div></div></div><div class="congrats-cards-wrapper"><div class="submission-congratulations ui-card ui-layer-2"><div class="card-content"><div class="submission-wrapper"><div class="submission-message"><h6 class="congrats-heading">Congratulations</h6><div class="congrats-subtext"><span class="congrats-text">You solved this challenge. Would you like to challenge your friends?</span><div class="social-links social-links-wrapper"><button class="ui-icon-btn ui-btn-normal social-share-icon" data-event-category="HRC Skills" data-event-label="FacebookChallenges" data-cd-skill="Strings"><span class="sr-only">Share on Facebook</span><svg viewBox="0 0 400 400" width="1em" height="1em" aria-hidden="true" focusable="false" class=" ui-svg-icon" fill="currentColor"><path d="M311.2 75H88.8C81.2 75 75 81.2 75 88.8v222.4c0 7.6 6.2 13.8 13.8 13.8h119.7v-96.8H176v-37.7h32.6v-27.8c0-32.3 19.7-49.9 48.5-49.9 13.8 0 25.7 1 29.1 1.5V148h-20c-15.7 0-18.7 7.4-18.7 18.4v24.1h37.4l-4.9 37.7h-32.5V325h63.7c7.6 0 13.8-6.2 13.8-13.8V88.8c0-7.6-6.2-13.8-13.8-13.8z"></path></svg></button><button class="ui-icon-btn ui-btn-normal social-share-icon" data-event-category="HRC Skills" data-event-label="TwitterChallenges" data-cd-skill="Strings"><span class="sr-only">Share on Twitter</span><svg viewBox="0 0 400 400" width="1em" height="1em" aria-hidden="true" focusable="false" class=" ui-svg-icon" fill="currentColor"><path d="M153.7 301.5c94.3 0 145.9-78.2 145.9-145.9 0-2.2 0-4.4-.1-6.6 10-7.3 18.7-16.3 25.6-26.5-9.4 4.1-19.3 6.9-29.5 8.1 10.7-6.4 18.7-16.5 22.5-28.4-10.1 6-21.1 10.2-32.6 12.4-19.4-20.7-51.9-21.7-72.6-2.2-13.3 12.5-19 31.2-14.8 49-41.2-2.1-79.7-21.5-105.7-53.6-13.6 23.4-6.7 53.4 15.9 68.5-8.2-.2-16.1-2.4-23.3-6.4v.6c0 24.4 17.2 45.4 41.2 50.3-7.6 2.1-15.5 2.4-23.2.9 6.7 20.9 26 35.2 47.9 35.6-18.2 14.3-40.6 22-63.7 22-4.1 0-8.2-.3-12.2-.7 23.6 14.9 50.8 22.9 78.7 22.9"></path></svg></button><button class="ui-icon-btn ui-btn-normal social-share-icon" data-event-category="HRC Skills" data-event-label="LinkedinChallenges" data-cd-skill="Strings"><span class="sr-only">Share on LinkedIn</span><svg viewBox="0 0 400 400" width="1em" height="1em" aria-hidden="true" focusable="false" class=" ui-svg-icon" fill="currentColor"><path d="M306.5 75H93.4C83.3 75 75 83.1 75 93v214c0 10 8.3 18 18.4 18h213.1c10.2 0 18.5-8.1 18.5-18V93c0-9.9-8.3-18-18.5-18zM149.2 288H112V168.7h37.1l.1 119.3zm-18.6-135.6c-11.9 0-21.5-9.6-21.5-21.5s9.6-21.5 21.5-21.5 21.5 9.6 21.5 21.5-9.6 21.5-21.5 21.5zM288 288h-37v-58c0-13.8-.2-31.6-19.3-31.6-19.3 0-22.2 15.1-22.2 30.6v59h-37V168.7H208V185h.5c4.9-9.4 17-19.3 35.1-19.3 37.5 0 44.5 24.7 44.5 56.8V288h-.1z"></path></svg></button></div></div></div><a class="ui-btn ui-btn-normal ui-btn-secondary submission-wrapper-next-entity-btn ui-btn-link ui-btn-styled" href="https://www.hackerrank.com/challenges/c-tutorial-stringstream?isFullScreen=true"><div class="ui-content align-icon-right"><span class="ui-text" aria-hidden="false">Next Challenge</span></div></a></div></div></div></div></div><div class="testcase-header"><div class="testcase-results"><div class="tc-container"><div class="testcase-wrapper theme-m"><div class="ui-tabs-wrap testcases-result-wrapper theme-m vertical-layout"><div class="render-list clearfix"><div class="tab-header" role="tablist" aria-orientation="vertical"><button id="tab-18-item-0" class="tab-item active" role="tab" tabindex="0" aria-selected="true" aria-controls="tab-18-content-0"><div class="d-flex testcase-tab-item tab-item-color-success testcase-item" data-attr2="master" data-attr3="c-tutorial-strings" data-analytics="TestCaseResultsTab" data-attr1="SubmitCode" data-attr5="0"><svg viewBox="0 0 24 24" width="1em" height="1em" role="img" aria-label="Passed" class="tab-item__status-icon ui-svg-icon" fill="currentColor"><path d="M12 23C5.9 23 1 18.1 1 12c0-3 1.1-5.7 3.2-7.8C6.3 2.1 9.1 1 12 1c1.6 0 3.1.3 4.5 1 .5.2.7.8.5 1.3-.2.5-.8.7-1.3.5-1.2-.5-2.4-.8-3.7-.8-5 0-9 4-9 9s4 9 9 9 9-4 9-9v-.9c0-.6.4-1 1-1s1 .4 1 1v.9c0 6.1-4.9 11-11 11z"></path><path d="M12 15c-.3 0-.5-.1-.7-.3l-3-3c-.4-.4-.4-1 0-1.4.4-.4 1-.4 1.4 0l2.3 2.3L22.3 2.3c.4-.4 1-.4 1.4 0s.4 1 0 1.4l-11 11c-.2.2-.4.3-.7.3z"></path></svg><span class="ui-icon-label tab-item-label">Test case 0</span></div></button><button id="tab-18-item-1" class="tab-item" role="tab" tabindex="-1" aria-selected="false"><div class="d-flex testcase-tab-item tab-item-color-success testcase-item" data-attr2="master" data-attr3="c-tutorial-strings" data-analytics="TestCaseResultsTab" data-attr1="SubmitCode" data-attr5="0"><svg viewBox="0 0 24 24" width="1em" height="1em" role="img" aria-label="Passed" class="tab-item__status-icon ui-svg-icon" fill="currentColor"><path d="M12 23C5.9 23 1 18.1 1 12c0-3 1.1-5.7 3.2-7.8C6.3 2.1 9.1 1 12 1c1.6 0 3.1.3 4.5 1 .5.2.7.8.5 1.3-.2.5-.8.7-1.3.5-1.2-.5-2.4-.8-3.7-.8-5 0-9 4-9 9s4 9 9 9 9-4 9-9v-.9c0-.6.4-1 1-1s1 .4 1 1v.9c0 6.1-4.9 11-11 11z"></path><path d="M12 15c-.3 0-.5-.1-.7-.3l-3-3c-.4-.4-.4-1 0-1.4.4-.4 1-.4 1.4 0l2.3 2.3L22.3 2.3c.4-.4 1-.4 1.4 0s.4 1 0 1.4l-11 11c-.2.2-.4.3-.7.3z"></path></svg><span class="ui-icon-label tab-item-label">Test case 1</span><div class="ui-tooltip-wrapper"><svg viewBox="0 0 24 24" width="1em" height="1em" role="img" aria-label="Hidden test case" data-automation="tab-item-lock-icon" class=" ui-svg-icon" fill="currentColor" aria-describedby=" tooltip-89"><path d="M19 10h-1V7c0-3.3-2.7-6-6-6S6 3.7 6 7v3H5c-1.7 0-3 1.3-3 3v7c0 1.7 1.3 3 3 3h14c1.7 0 3-1.3 3-3v-7c0-1.7-1.3-3-3-3zM8 7c0-2.2 1.8-4 4-4s4 1.8 4 4v3H8V7zm12 13c0 .6-.4 1-1 1H5c-.6 0-1-.4-1-1v-7c0-.6.4-1 1-1h14c.6 0 1 .4 1 1v7z"></path></svg></div></div></button><button id="tab-18-item-2" class="tab-item" role="tab" tabindex="-1" aria-selected="false"><div class="d-flex testcase-tab-item tab-item-color-success testcase-item" data-attr2="master" data-attr3="c-tutorial-strings" data-analytics="TestCaseResultsTab" data-attr1="SubmitCode" data-attr5="0"><svg viewBox="0 0 24 24" width="1em" height="1em" role="img" aria-label="Passed" class="tab-item__status-icon ui-svg-icon" fill="currentColor"><path d="M12 23C5.9 23 1 18.1 1 12c0-3 1.1-5.7 3.2-7.8C6.3 2.1 9.1 1 12 1c1.6 0 3.1.3 4.5 1 .5.2.7.8.5 1.3-.2.5-.8.7-1.3.5-1.2-.5-2.4-.8-3.7-.8-5 0-9 4-9 9s4 9 9 9 9-4 9-9v-.9c0-.6.4-1 1-1s1 .4 1 1v.9c0 6.1-4.9 11-11 11z"></path><path d="M12 15c-.3 0-.5-.1-.7-.3l-3-3c-.4-.4-.4-1 0-1.4.4-.4 1-.4 1.4 0l2.3 2.3L22.3 2.3c.4-.4 1-.4 1.4 0s.4 1 0 1.4l-11 11c-.2.2-.4.3-.7.3z"></path></svg><span class="ui-icon-label tab-item-label">Test case 2</span><div class="ui-tooltip-wrapper"><svg viewBox="0 0 24 24" width="1em" height="1em" role="img" aria-label="Hidden test case" data-automation="tab-item-lock-icon" class=" ui-svg-icon" fill="currentColor" aria-describedby=" tooltip-90"><path d="M19 10h-1V7c0-3.3-2.7-6-6-6S6 3.7 6 7v3H5c-1.7 0-3 1.3-3 3v7c0 1.7 1.3 3 3 3h14c1.7 0 3-1.3 3-3v-7c0-1.7-1.3-3-3-3zM8 7c0-2.2 1.8-4 4-4s4 1.8 4 4v3H8V7zm12 13c0 .6-.4 1-1 1H5c-.6 0-1-.4-1-1v-7c0-.6.4-1 1-1h14c.6 0 1 .4 1 1v7z"></path></svg></div></div></button><button id="tab-18-item-3" class="tab-item" role="tab" tabindex="-1" aria-selected="false"><div class="d-flex testcase-tab-item tab-item-color-success testcase-item" data-attr2="master" data-attr3="c-tutorial-strings" data-analytics="TestCaseResultsTab" data-attr1="SubmitCode" data-attr5="0"><svg viewBox="0 0 24 24" width="1em" height="1em" role="img" aria-label="Passed" class="tab-item__status-icon ui-svg-icon" fill="currentColor"><path d="M12 23C5.9 23 1 18.1 1 12c0-3 1.1-5.7 3.2-7.8C6.3 2.1 9.1 1 12 1c1.6 0 3.1.3 4.5 1 .5.2.7.8.5 1.3-.2.5-.8.7-1.3.5-1.2-.5-2.4-.8-3.7-.8-5 0-9 4-9 9s4 9 9 9 9-4 9-9v-.9c0-.6.4-1 1-1s1 .4 1 1v.9c0 6.1-4.9 11-11 11z"></path><path d="M12 15c-.3 0-.5-.1-.7-.3l-3-3c-.4-.4-.4-1 0-1.4.4-.4 1-.4 1.4 0l2.3 2.3L22.3 2.3c.4-.4 1-.4 1.4 0s.4 1 0 1.4l-11 11c-.2.2-.4.3-.7.3z"></path></svg><span class="ui-icon-label tab-item-label">Test case 3</span><div class="ui-tooltip-wrapper"><svg viewBox="0 0 24 24" width="1em" height="1em" role="img" aria-label="Hidden test case" data-automation="tab-item-lock-icon" class=" ui-svg-icon" fill="currentColor" aria-describedby=" tooltip-91"><path d="M19 10h-1V7c0-3.3-2.7-6-6-6S6 3.7 6 7v3H5c-1.7 0-3 1.3-3 3v7c0 1.7 1.3 3 3 3h14c1.7 0 3-1.3 3-3v-7c0-1.7-1.3-3-3-3zM8 7c0-2.2 1.8-4 4-4s4 1.8 4 4v3H8V7zm12 13c0 .6-.4 1-1 1H5c-.6 0-1-.4-1-1v-7c0-.6.4-1 1-1h14c.6 0 1 .4 1 1v7z"></path></svg></div></div></button><button id="tab-18-item-4" class="tab-item" role="tab" tabindex="-1" aria-selected="false"><div class="d-flex testcase-tab-item tab-item-color-success testcase-item" data-attr2="master" data-attr3="c-tutorial-strings" data-analytics="TestCaseResultsTab" data-attr1="SubmitCode" data-attr5="0"><svg viewBox="0 0 24 24" width="1em" height="1em" role="img" aria-label="Passed" class="tab-item__status-icon ui-svg-icon" fill="currentColor"><path d="M12 23C5.9 23 1 18.1 1 12c0-3 1.1-5.7 3.2-7.8C6.3 2.1 9.1 1 12 1c1.6 0 3.1.3 4.5 1 .5.2.7.8.5 1.3-.2.5-.8.7-1.3.5-1.2-.5-2.4-.8-3.7-.8-5 0-9 4-9 9s4 9 9 9 9-4 9-9v-.9c0-.6.4-1 1-1s1 .4 1 1v.9c0 6.1-4.9 11-11 11z"></path><path d="M12 15c-.3 0-.5-.1-.7-.3l-3-3c-.4-.4-.4-1 0-1.4.4-.4 1-.4 1.4 0l2.3 2.3L22.3 2.3c.4-.4 1-.4 1.4 0s.4 1 0 1.4l-11 11c-.2.2-.4.3-.7.3z"></path></svg><span class="ui-icon-label tab-item-label">Test case 4</span><div class="ui-tooltip-wrapper"><svg viewBox="0 0 24 24" width="1em" height="1em" role="img" aria-label="Hidden test case" data-automation="tab-item-lock-icon" class=" ui-svg-icon" fill="currentColor" aria-describedby=" tooltip-92"><path d="M19 10h-1V7c0-3.3-2.7-6-6-6S6 3.7 6 7v3H5c-1.7 0-3 1.3-3 3v7c0 1.7 1.3 3 3 3h14c1.7 0 3-1.3 3-3v-7c0-1.7-1.3-3-3-3zM8 7c0-2.2 1.8-4 4-4s4 1.8 4 4v3H8V7zm12 13c0 .6-.4 1-1 1H5c-.6 0-1-.4-1-1v-7c0-.6.4-1 1-1h14c.6 0 1 .4 1 1v7z"></path></svg></div></div></button><button id="tab-18-item-5" class="tab-item" role="tab" tabindex="-1" aria-selected="false"><div class="d-flex testcase-tab-item tab-item-color-success testcase-item" data-attr2="master" data-attr3="c-tutorial-strings" data-analytics="TestCaseResultsTab" data-attr1="SubmitCode" data-attr5="0"><svg viewBox="0 0 24 24" width="1em" height="1em" role="img" aria-label="Passed" class="tab-item__status-icon ui-svg-icon" fill="currentColor"><path d="M12 23C5.9 23 1 18.1 1 12c0-3 1.1-5.7 3.2-7.8C6.3 2.1 9.1 1 12 1c1.6 0 3.1.3 4.5 1 .5.2.7.8.5 1.3-.2.5-.8.7-1.3.5-1.2-.5-2.4-.8-3.7-.8-5 0-9 4-9 9s4 9 9 9 9-4 9-9v-.9c0-.6.4-1 1-1s1 .4 1 1v.9c0 6.1-4.9 11-11 11z"></path><path d="M12 15c-.3 0-.5-.1-.7-.3l-3-3c-.4-.4-.4-1 0-1.4.4-.4 1-.4 1.4 0l2.3 2.3L22.3 2.3c.4-.4 1-.4 1.4 0s.4 1 0 1.4l-11 11c-.2.2-.4.3-.7.3z"></path></svg><span class="ui-icon-label tab-item-label">Test case 5</span><div class="ui-tooltip-wrapper"><svg viewBox="0 0 24 24" width="1em" height="1em" role="img" aria-label="Hidden test case" data-automation="tab-item-lock-icon" class=" ui-svg-icon" fill="currentColor" aria-describedby=" tooltip-93"><path d="M19 10h-1V7c0-3.3-2.7-6-6-6S6 3.7 6 7v3H5c-1.7 0-3 1.3-3 3v7c0 1.7 1.3 3 3 3h14c1.7 0 3-1.3 3-3v-7c0-1.7-1.3-3-3-3zM8 7c0-2.2 1.8-4 4-4s4 1.8 4 4v3H8V7zm12 13c0 .6-.4 1-1 1H5c-.6 0-1-.4-1-1v-7c0-.6.4-1 1-1h14c.6 0 1 .4 1 1v7z"></path></svg></div></div></button></div></div><div class="tab-list-content tab-content d-flex" role="tabpanel" tabindex="0" id="tab-18-content-0" aria-labelledby="tab-18-item-0"><div class="tab-pane-content"><div id="testcases-result__id" class="d-flex flex-column flex-wrap compilation-time-response"><div class="compile-message run-time-message flex-display run-time-message__line-numbers"><div class="d-flex compile-field-label">Compiler Message<span class="compile-field-label__links"></span> </div><div class="compile-output-message"><div class="d-flex compiler-message"><div class="compiler-message__message-wrapper"><pre class="compiler-message__value"><code>Success</code></pre></div></div></div></div><div class="stdin run-time-message flex-display run-time-message__line-numbers"><div class="d-flex compile-field-label">Input (stdin)<span class="compile-field-label__links"><button class="ui-btn ui-btn-normal ui-btn-plain text-link cursor-pointer" data-attr2="master" data-attr3="c-tutorial-strings" data-analytics="DownloadTestcase" data-attr1="SubmitCode" data-attr4="stdin" data-attr7="0" data-attr6="right" aria-label="Download Input (stdin)" data-automation="compile-field-label-download"><div class="ui-content align-icon-right"><span class="ui-text" aria-hidden="false">Download</span></div></button></span> </div><div class="compile-output-message"><ul class="lines-container" aria-label="Input (stdin)"><li class="d-flex lines-container__line"><span class="lines-container__content-wrapper"><pre class="lines-container__content">abcd</pre></span></li><li class="d-flex lines-container__line"><span class="lines-container__content-wrapper"><pre class="lines-container__content">ef</pre></span></li></ul></div></div><div class="expected-output run-time-message flex-display run-time-message__line-numbers"><div class="d-flex compile-field-label">Expected Output<span class="compile-field-label__links"><button class="ui-btn ui-btn-normal ui-btn-plain text-link cursor-pointer" data-attr2="master" data-attr3="c-tutorial-strings" data-analytics="DownloadTestcase" data-attr1="SubmitCode" data-attr4="expected-output" data-attr7="0" data-attr6="right" aria-label="Download Expected Output" data-automation="compile-field-label-download"><div class="ui-content align-icon-right"><span class="ui-text" aria-hidden="false">Download</span></div></button></span> </div><div class="compile-output-message"><ul class="lines-container" aria-label="Expected Output"><li class="d-flex lines-container__line"><span class="lines-container__content-wrapper"><pre class="lines-container__content">4 2</pre></span></li><li class="d-flex lines-container__line"><span class="lines-container__content-wrapper"><pre class="lines-container__content">abcdef</pre></span></li><li class="d-flex lines-container__line"><span class="lines-container__content-wrapper"><pre class="lines-container__content">ebcd af</pre></span></li></ul></div></div></div></div></div></div></div></div></div></div></div></div></div></div></div></section></div></div></div></div></div></div></div></section></div></div><footer class="community-footer"><ul class="footer-links"><li class="link-item"><a target="_blank" class="footer-link blog" data-analytics="FooterLinkBlog" href="https://www.hackerrank.com/blog">Blog</a></li><li class="link-item"><a target="_blank" class="footer-link scoring" data-analytics="FooterLinkScoring" href="https://www.hackerrank.com/scoring">Scoring</a></li><li class="link-item"><a target="_blank" class="footer-link environment" data-analytics="FooterLinkEnvironment" href="https://www.hackerrank.com/environment">Environment</a></li><li class="link-item"><a target="_blank" class="footer-link faq" data-analytics="FooterLinkFAQ" href="https://www.hackerrank.com/faq">FAQ</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkAboutUs" href="https://www.hackerrank.com/about-us">About Us</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkSupport" href="https://www.hackerrank.com/support">Support</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkCareers" href="https://www.hackerrank.com/careers">Careers</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkTermsOfService" href="https://www.hackerrank.com/terms-of-service">Terms Of Service</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkPrivacyPolicy" href="https://www.hackerrank.com/privacy">Privacy Policy</a></li></ul></footer><div></div></div></div></div></div></div><!--Required to handle event bubbling of click in ios safari -->

  <script>
  //HR namespace
  HR = window.HR || {};
  HR.development = false;
  HR.assetPath = 'https://hrcdn.net/fcore/assets/';
  HR.pageLoadTime = Date.now();
  HR.serverAPITime = 762
  HR.serverRenderTime = 8
  HR.production = true;
  HR.devServer = false;
  HR.isIsomorphic = true;
  HR.loadedWithOldCss = false;
  HR.pusher = {"key":"a280047e3b323ccb1b65","cluster":"mt1"};
</script>

<!-- Vendor scripts -->

<script src="./Strings _files/hackerrank_r_vendor-2bc7c1b2f5.js.download"></script>



<script src="./Strings _files/runtime-8c589d28.js.download"></script>

  <script src="./Strings _files/chunks_runtime-3ced2eb5b8.js.download"></script>

<script src="./Strings _files/hackerrank_r_client-0296d393.js.download"></script>


  <script>
    // HR namespace
    HR = window.HR || {};
    HR.firebaseConfig = {"apiKey":"AIzaSyByUOhaiUFzuu3Cil0y1jIWfS8NfFFjpMc","authDomain":"codepair-dev.firebaseapp.com","databaseURL":"codepair-dev.firebaseio.com","fbProxyEndpoint":"codepair-proxy.hackerrank.link","akamaiProxyEndpoint":"sync-staging.hackerrank.com","databaseName":"codepair-dev"};
    HR.productNamespace = 'hackerrank';
    HR.stripe = {"key":"pk_PBXVCPHjyi31lIcbSe2mnlWEIYUzG"};
    HR.servicesBaseUrl = "https://services.hackerrank.com";
    HR.pendoAPIKey = "6a49047d-7d4c-46f5-7b81-8b6193d6bf7b";
    HR.googleAuthClientId = "539603982008.apps.googleusercontent.com";
    HR.krakendHost = "";
  </script>

  <!-- Add app.js before adding track scripts -->
  <script src="./Strings _files/hackerrank_r_app-4e497a58.js.download"></script>

  
<script>
  var getUser = (function() {
    var userData;
    if (HR.userEmitter) {
      HR.userEmitter.on('initializeNewUser', function(user) {
        userData = user;
      });
    }
    try{
      if (typeof userData === 'undefined') {
        var initialDataElm = document.querySelector('#initialUserData');
        userData = JSON.parse(decodeURI(initialDataElm.innerHTML));
        initialDataElm.remove();
      }
    } catch(e){
      userData = {};
      console.log('No initial User data found');
    }
    return function() {
      return userData;
    }
  })();
</script>

<!-- setting up sentry -->

<script src="./Strings _files/raven.min.js.download" async="" crossorigin="anonymous" id="raven"></script>
<script>
  (function(window, queue, loaded, script, user) {

      var setupRaven = function(user) {
        var userContext = {};
        var extraContext = {};
        if (user && !!user.id) {
          userContext.handle = user.id;
        }
        if (window.Cookies) {
          if (HR.productNamespace === 'hackerrank') {
            extraContext.mixpanel_token = Cookies.get('hackerrank_mixpanel_token')
          } else if (HR.productNamespace === 'hackerrankx') {
            extraContext.mixpanel_token = Cookies.get('hackerrankx_mixpanel_token')
          }
        }
        if(typeof Raven !== 'undefined') {
          Raven.setUserContext(userContext);
          Raven.setExtraContext(extraContext);
        }
      }
      HR.userEmitter.on('initializeNewUser', function(user) {
        setupRaven(user);
      });

      window.onerror = function e(message, file, lineNo, columnNo, error) {
          if (loaded) return;
          queue.push([message, file, lineNo, columnNo, error]);
      };

      window.onunhandledrejection = function e(error) {
          if (loaded) return;
          queue.push([
              error.reason,
          ]);
      };

      script.onreadystatechange = script.onload = function() {
          if (loaded) return;
          loaded = true;

          Raven.config('https://6b2d52b23d5a4dd4bc44330335327c04@sentry.io/234162', {
              captureUnhandledRejections: true,
              release: window.MANIFEST_VERSION,
              ignoreUrls: [/cdn\.userty\.com/],
              ignoreErrors: [
                'Error: Connection is disposed',
                'Connection got disposed',
                'A network error occurred',
                'Model is disposed!',
                "Unable to get property 'isVisible' of undefined",
                "Cannot read property 'isVisible' of undefined",
                "Cannot destructure property 'language' of 'e' as it is null.",
                'Language Client services has not been installed',
              ],
          }).install();

          setupRaven(user);

          queue.forEach(function(error) {
              Raven.captureException(error[4] || error[0], {
                  extra: {
                      file: error[1],
                      line: error[2],
                      col: error[3],
                  },
              });
          });
      };
  })(window, [], false, document.getElementById('raven'), getUser());
</script>


<!-- Mixpanel Stub -->
<script type="text/javascript">
window.mixpanel = window.mixpanel || [];
var attrs = "disable track track_pageview track_links track_forms register register_once alias unregister identify name_tag set_config people.set people.set_once people.increment people.append people.track_charge people.clear_charges people.delete_user".split(" ");
for (var attribute in attrs) {
  mixpanel[attrs[attribute]] = function () {};
}
</script>

<!-- google analytics tracking -->
<script>
var _gaq = _gaq || [];

</script>
<!-- Pending candidate site custom GA code -->
<!-- google analytics tracking end-->

<!-- fullstory tracking start -->

<!-- fullstory tracking end -->

<!-- Pendo Tracking   -->

  <!-- Pendo Tracking end -->
  
<!-- GTM tracking -->

<script type="text/javascript">
var gtmTracking = function (user){
  if (window.dataLayer) {
    

    
      window.dataLayer.push({
        'event': 'identify',
        onboardingStatus: user.onboarding_status,
        signupIntent: user.signup_intent,
        isProfessional: user.is_professional,
      });
    
  }
}
gtmTracking(getUser());
HR.userEmitter.on('initializeNewUser', function(user) {
  gtmTracking(user);
});

</script>

<!-- GTM tracking end -->

<!-- Plausbile tracking (Labs) -->

  <script defer="" data-domain="community" src="./Strings _files/script.tagged-events.outbound-links.js.download"></script>
  <script>window.plausible = window.plausible || function() { (window.plausible.q = window.plausible.q || []).push(arguments) }</script>

<!-- Plausbile tracking (Labs) end -->



<!-- Google Tag Manager (noscript) #1 -->
<noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-NZTBQVZ"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<!-- End Google Tag Manager (noscript) #1 -->


<!-- Marketo to be added later -->

<!-- Bizible -->

<!-- HR metrics init -->
<script type="text/javascript">

(function() {
  if(typeof hr_metrics !== 'undefined' && hr_metrics.init ) {
      hr_metrics.init({
        product: 'hackerrank',
        use_cookie: true,
        uid_cookie_key: 'hackerrank_mixpanel_token',
        uid_token_cookie_key: 'metrics_user_identifier',
        session_cookie_key: 'session_id',
        metrics_endpoint:  'https://metrics.hackerrank.com/metrics' 
      });
  }
})();

(function(h) {
  window.hr_metrics = h;
  if (!h.loaded) {
    var a = ['track', 'batch_track', 'app_track', 'externalService', 'init', 'batch_track_record', 'track_dwell_time', 'set_navigation_data'];
    for (var i = 0; i < a.length; i++) {
      if (!h[a[i]]) {h[a[i]] = function() {};}
    }
  }
})(window.hr_metrics || {});



</script>
<!-- hrutm_params -->

<!-- HR metrics extension pack -->
<script type="text/javascript">


  if (('performance' in window) && ('timing' in window.performance)) {
    window.addEventListener('load', function() {
      setTimeout(function(){
        var timing = window.performance.timing;
        var obj = {
          referring_url: window.location.pathname,
          fullLoadTime: timing.loadEventEnd - timing.navigationStart,
          // Total time from req start to load
          loadTime: timing.loadEventEnd - timing.fetchStart,
          // Time spent constructing the DOM tree
          domReadyTime: timing.domComplete - timing.domInteractive,
          // Time consumed preparing the new page
          readyStart: timing.fetchStart - timing.navigationStart,
          // Time spent during redirection
          redirectTime: timing.redirectEnd - timing.redirectStart,
          // AppCache
          appcacheTime: timing.domainLookupStart - timing.fetchStart,
          // Time spent unloading documents
          unloadEventTime: timing.unloadEventEnd - timing.unloadEventStart,
          // DNS query time
          lookupDomainTime: timing.domainLookupEnd - timing.domainLookupStart,
          // TCP connection time
          connectTime: timing.connectEnd - timing.connectStart,
          // Time spent during the request
          requestTime: timing.responseEnd - timing.requestStart,
          // Time to first byte for the request
          timeToFirstByte: timing.responseStart - timing.requestStart,
          // Request to completion of the DOM loading
          initDomTreeTime: timing.domInteractive - timing.responseEnd,
          // Load event time
          loadEventTime: timing.loadEventEnd - timing.loadEventStart,
          // Origin of the request
          react: true,
          //isIsomorphic flag
          isIsomorphic: window.HR.isIsomorphic,
          //old css loaded flag
          loadedWithOldCss: window.HR.loadedWithOldCss,
          // server timings
          serverAPITime: window.HR.serverAPITime,
          serverRenderTime: window.HR.serverRenderTime,
        }

        if (('navigation' in window.performance) && ('getEntries' in window.performance)) {
          obj.navigationType = window.performance.navigation.type;
          obj.navigationRedirectCount = window.performance.navigation.redirectCount;
          if (obj.fullLoadTime > 8000) {
            try {
              var entries = window.performance.getEntries();
              if(entries[0].toJSON){
                obj.networkRequests = entries.map(function(e) {return e.toJSON();});
              }
            } catch (e) {
              //do nothing
            }
          }
        }
        if(hr_metrics && hr_metrics.app_track) hr_metrics.app_track('page-load-metrics', obj);
      }, 1000);
    });
  }


function findCookieValue(cookieName) {
  var cookieString = document.cookie.split(';').find((a) => a.includes(cookieName)) || '';
  return cookieString !== "" ? cookieString.split('=')[1] : "";
}

window.addEventListener('load', function() {
  var _pathname = document.location.pathname;

  if(hr_metrics && hr_metrics.batch_track) hr_metrics.batch_track('PageLoad', _pathname + document.location.search, {
      attribute1: _pathname,
      // check if user is in dark mode or not
      attribute2: findCookieValue('user_theme'),
  });

    if (hr_metrics.track_dwell_time && hr_metrics.set_navigation_data) {
        hr_metrics.track_dwell_time(_pathname);
        hr_metrics.set_navigation_data();
    }

    window.addEventListener('beforeunload', function(){

        var _pathname = document.location.pathname;
        if (hr_metrics){
          if(hr_metrics.batch_track) hr_metrics.batch_track('PageClose', _pathname + document.location.search, {
              attribute2: _pathname
          });
          if(hr_metrics.track_dwell_time) hr_metrics.track_dwell_time(_pathname, true);
          if(hr_metrics.batch_track_record) hr_metrics.batch_track_record(true);
        }
    });

});

</script>

<!-- Facebook SDK -->
<!-- Twitter SDK -->

<!-- track button clicks -->
<script>
  document.addEventListener('click', (e) => {
    const clickableElm = e.target.closest('a[data-analytics], button[data-analytics], input[data-analytics], select[data-analytics], i[data-analytics], div[data-analytics], span[data-analytics], h5[data-analytics]');

    if (clickableElm) {
      if (clickableElm.getAttribute('data-analytics')) {
          action = 'Click'; data = clickableElm.getAttribute('data-analytics');
      } else {
          return;
      }

      
        hr_metrics.batch_track(action, data, (function() {
            var params={};
            for (var _i=1; _i<=12; ++_i){
                var _attr = 'data-attr'+_i;
                if (clickableElm.getAttribute(_attr)){
                  params['attribute'+_i] = clickableElm.getAttribute(_attr);
                }
            }
            var attributes = clickableElm.attributes, attr_length = clickableElm.attributes.length;
            for (var i = 0; i < attr_length; i++){
              var attribute = attributes[i];
              if (attribute.name.indexOf('data-attr-') === 0){
                param_name = attribute.name.substr('data-attr-'.length);
                if (param_name.length > 0) {
                  params[param_name] = attribute.value;
                }
              }
            }
            return params;
        })());
      

      
    }
  });

</script>
<!-- track button clicks end-->
<!-- Profitwell script-->

<!-- Profitwell script ends -->

<!-- Linkedin Insights -->




<script type="text/javascript" id="">function debounce(b,f,c){var a;return function(){var d=this,e=arguments,g=function(){a=null;c||b.apply(d,e)},h=c&&!a;clearTimeout(a);a=setTimeout(g,f);h&&b.apply(d,e)}}(function(){document.addEventListener("click",debounce(google_tag_manager["rm"]["10905007"](14),500,!0),!0);document.addEventListener("mouseenter",debounce(google_tag_manager["rm"]["10905007"](23),1E3),!0);window.jsTrackGoogleAnalytics&&"function"!==typeof window.jsTrackGoogleAnalytics||(window.jsTrackGoogleAnalytics=google_tag_manager["rm"]["10905007"](26))})();</script><script type="text/javascript" id="">Element.prototype.matches||(Element.prototype.matches=Element.prototype.msMatchesSelector||Element.prototype.webkitMatchesSelector);"function"!=typeof Object.assign&&Object.defineProperty(Object,"assign",{value:function(d,f){if(null==d)throw new TypeError("Cannot convert undefined or null to object");for(var e=Object(d),b=1;b<arguments.length;b++){var a=arguments[b];if(null!=a)for(var c in a)Object.prototype.hasOwnProperty.call(a,c)&&(e[c]=a[c])}return e},writable:!0,configurable:!0});</script><div class="monaco-aria-container"><div class="monaco-alert" role="alert" aria-atomic="true"></div><div class="monaco-alert" role="alert" aria-atomic="true"></div><div class="monaco-status" role="complementary" aria-live="polite" aria-atomic="true"></div><div class="monaco-status" role="complementary" aria-live="polite" aria-atomic="true"></div></div></body></html>