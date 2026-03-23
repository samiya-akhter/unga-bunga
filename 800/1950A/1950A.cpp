// Source extraction failed to locate the code block using regex!
// However, the raw data was fetched successfully.
// Please check the contents below to identify the Codeforces format change:
/* RAW_DATA_START


<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN">
<html lang="en">
<head>
        <script async src="https://www.googletagmanager.com/gtag/js?id=UA-743380-5"></script>
        <script>
            window.dataLayer = window.dataLayer || [];
            function gtag(){dataLayer.push(arguments);}
            gtag('js', new Date());
            gtag('config', 'UA-743380-5');
        </script>

    <meta http-equiv="content-type" content="text/html; charset=UTF-8">
    <meta name="X-Csrf-Token" content="9c0af150cc1e9fd52de2400424dc0f85"/>
    <meta id="viewport" name="viewport" content="width=device-width, initial-scale=0.01"/>
    <meta name="robots" content="noai">
    <meta name="robots" content="noimageai">

    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/jquery-1.8.3.js"></script>
    <script type="application/javascript">
        window.locale = "en";
        window.standaloneContest = false;
        function adjustViewport() {
            var screenWidthPx = Math.min($(window).width(), window.screen.width);
            var siteWidthPx = 1100; // min width of site
            var ratio = Math.min(screenWidthPx / siteWidthPx, 1.0);
            var viewport = "width=device-width, initial-scale=" + ratio;
            $('#viewport').attr('content', viewport);
            var style = $('<style>html * { max-height: 1000000px; }</style>');
            $('html > head').append(style);
        }

        if ( /Android|webOS|iPhone|iPad|iPod|BlackBerry/i.test(navigator.userAgent) ) {
            adjustViewport();
        }

        /* Protection against trailing dot in domain. * /
        let hostLength = window.location.host.length;
        if (hostLength > 1 && window.location.host[hostLength - 1] === '.') {
            window.location = window.location.protocol + "//" + window.location.host.substring(0, hostLength - 1);
        }
    </script>

    <meta http-equiv="pragma" content="no-cache">
    <meta http-equiv="expires" content="-1">
    <meta http-equiv="profileName" content="k1">
    <meta name="google-site-verification" content="OTd2dN5x4nS4OPknPI9JFg36fKxjqY0i1PSfFPv_J90"/>
    <meta property="fb:admins" content="100001352546622" />
    <meta property="og:image" content="//codeforces.com/codeforces.org/s/99808/images/codeforces-sponsored-by-ton.png" />
    <link rel="image_src" href="//codeforces.com/codeforces.org/s/99808/images/codeforces-sponsored-by-ton.png" />
    <meta property="og:title" content="Codeforces"/>
    <meta property="og:description" content=""/>
    
    <meta property="og:site_name" content="Codeforces"/>
    
    
    
    
    
    
    <meta name="utc_offset" content="+03:00"/>
    <meta name="verify-reformal" content="f56f99fd7e087fb6ccb48ef2" />
    <title>Codeforces</title>
        <meta name="description" content="Codeforces. Programming competitions and contests, programming community" />
        <meta name="keywords" content="programming algorithm contest competition informatics olympiads c++ java graphs vkcup" />
    <meta name="robots" content="index, follow" />

    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/font-awesome.min.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/line-awesome.min.css" type="text/css" charset="utf-8" />

        <link rel="preconnect" href="https://challenges.cloudflare.com">
        <link rel="dns-prefetch" href="https://challenges.cloudflare.com">
        <style type="text/css">@font-face {font-family:PT Sans Narrow;font-style:normal;font-weight:400;src:url(/cf-fonts/s/pt-sans-narrow/5.0.19/cyrillic/400/normal.woff2);unicode-range:U+0301,U+0400-045F,U+0490-0491,U+04B0-04B1,U+2116;font-display:swap;}@font-face {font-family:PT Sans Narrow;font-style:normal;font-weight:400;src:url(/cf-fonts/s/pt-sans-narrow/5.0.19/cyrillic-ext/400/normal.woff2);unicode-range:U+0460-052F,U+1C80-1C88,U+20B4,U+2DE0-2DFF,U+A640-A69F,U+FE2E-FE2F;font-display:swap;}@font-face {font-family:PT Sans Narrow;font-style:normal;font-weight:400;src:url(/cf-fonts/s/pt-sans-narrow/5.0.19/latin-ext/400/normal.woff2);unicode-range:U+0100-02AF,U+0304,U+0308,U+0329,U+1E00-1E9F,U+1EF2-1EFF,U+2020,U+20A0-20AB,U+20AD-20CF,U+2113,U+2C60-2C7F,U+A720-A7FF;font-display:swap;}@font-face {font-family:PT Sans Narrow;font-style:normal;font-weight:400;src:url(/cf-fonts/s/pt-sans-narrow/5.0.19/latin/400/normal.woff2);unicode-range:U+0000-00FF,U+0131,U+0152-0153,U+02BB-02BC,U+02C6,U+02DA,U+02DC,U+0304,U+0308,U+0329,U+2000-206F,U+2074,U+20AC,U+2122,U+2191,U+2193,U+2212,U+2215,U+FEFF,U+FFFD;font-display:swap;}@font-face {font-family:PT Sans Narrow;font-style:normal;font-weight:700;src:url(/cf-fonts/s/pt-sans-narrow/5.0.19/cyrillic-ext/700/normal.woff2);unicode-range:U+0460-052F,U+1C80-1C88,U+20B4,U+2DE0-2DFF,U+A640-A69F,U+FE2E-FE2F;font-display:swap;}@font-face {font-family:PT Sans Narrow;font-style:normal;font-weight:700;src:url(/cf-fonts/s/pt-sans-narrow/5.0.19/latin/700/normal.woff2);unicode-range:U+0000-00FF,U+0131,U+0152-0153,U+02BB-02BC,U+02C6,U+02DA,U+02DC,U+0304,U+0308,U+0329,U+2000-206F,U+2074,U+20AC,U+2122,U+2191,U+2193,U+2212,U+2215,U+FEFF,U+FFFD;font-display:swap;}@font-face {font-family:PT Sans Narrow;font-style:normal;font-weight:700;src:url(/cf-fonts/s/pt-sans-narrow/5.0.19/cyrillic/700/normal.woff2);unicode-range:U+0301,U+0400-045F,U+0490-0491,U+04B0-04B1,U+2116;font-display:swap;}@font-face {font-family:PT Sans Narrow;font-style:normal;font-weight:700;src:url(/cf-fonts/s/pt-sans-narrow/5.0.19/latin-ext/700/normal.woff2);unicode-range:U+0100-02AF,U+0304,U+0308,U+0329,U+1E00-1E9F,U+1EF2-1EFF,U+2020,U+20A0-20AB,U+20AD-20CF,U+2113,U+2C60-2C7F,U+A720-A7FF;font-display:swap;}</style>
        <style type="text/css">@font-face {font-family:Cuprum;font-style:normal;font-weight:400;src:url(/cf-fonts/s/cuprum/5.0.18/latin/400/normal.woff2);unicode-range:U+0000-00FF,U+0131,U+0152-0153,U+02BB-02BC,U+02C6,U+02DA,U+02DC,U+0304,U+0308,U+0329,U+2000-206F,U+2074,U+20AC,U+2122,U+2191,U+2193,U+2212,U+2215,U+FEFF,U+FFFD;font-display:swap;}@font-face {font-family:Cuprum;font-style:normal;font-weight:400;src:url(/cf-fonts/s/cuprum/5.0.18/vietnamese/400/normal.woff2);unicode-range:U+0102-0103,U+0110-0111,U+0128-0129,U+0168-0169,U+01A0-01A1,U+01AF-01B0,U+0300-0301,U+0303-0304,U+0308-0309,U+0323,U+0329,U+1EA0-1EF9,U+20AB;font-display:swap;}@font-face {font-family:Cuprum;font-style:normal;font-weight:400;src:url(/cf-fonts/s/cuprum/5.0.18/cyrillic/400/normal.woff2);unicode-range:U+0301,U+0400-045F,U+0490-0491,U+04B0-04B1,U+2116;font-display:swap;}@font-face {font-family:Cuprum;font-style:normal;font-weight:400;src:url(/cf-fonts/s/cuprum/5.0.18/cyrillic-ext/400/normal.woff2);unicode-range:U+0460-052F,U+1C80-1C88,U+20B4,U+2DE0-2DFF,U+A640-A69F,U+FE2E-FE2F;font-display:swap;}@font-face {font-family:Cuprum;font-style:normal;font-weight:400;src:url(/cf-fonts/s/cuprum/5.0.18/latin-ext/400/normal.woff2);unicode-range:U+0100-02AF,U+0304,U+0308,U+0329,U+1E00-1E9F,U+1EF2-1EFF,U+2020,U+20A0-20AB,U+20AD-20CF,U+2113,U+2C60-2C7F,U+A720-A7FF;font-display:swap;}</style>


    <link rel="apple-touch-icon" sizes="57x57" href="//codeforces.com/codeforces.org/s/99808/apple-icon-57x57.png">
    <link rel="apple-touch-icon" sizes="60x60" href="//codeforces.com/codeforces.org/s/99808/apple-icon-60x60.png">
    <link rel="apple-touch-icon" sizes="72x72" href="//codeforces.com/codeforces.org/s/99808/apple-icon-72x72.png">
    <link rel="apple-touch-icon" sizes="76x76" href="//codeforces.com/codeforces.org/s/99808/apple-icon-76x76.png">
    <link rel="apple-touch-icon" sizes="114x114" href="//codeforces.com/codeforces.org/s/99808/apple-icon-114x114.png">
    <link rel="apple-touch-icon" sizes="120x120" href="//codeforces.com/codeforces.org/s/99808/apple-icon-120x120.png">
    <link rel="apple-touch-icon" sizes="144x144" href="//codeforces.com/codeforces.org/s/99808/apple-icon-144x144.png">
    <link rel="apple-touch-icon" sizes="152x152" href="//codeforces.com/codeforces.org/s/99808/apple-icon-152x152.png">
    <link rel="apple-touch-icon" sizes="180x180" href="//codeforces.com/codeforces.org/s/99808/apple-icon-180x180.png">
    <link rel="icon" type="image/png" sizes="192x192"  href="//codeforces.com/codeforces.org/s/99808/android-icon-192x192.png">
    <link rel="icon" type="image/png" sizes="32x32" href="//codeforces.com/codeforces.org/s/99808/favicon-32x32.png">
    <link rel="icon" type="image/png" sizes="96x96" href="//codeforces.com/codeforces.org/s/99808/favicon-96x96.png">
    <link rel="icon" type="image/png" sizes="16x16" href="//codeforces.com/codeforces.org/s/99808/favicon-16x16.png">
    <link rel="manifest" href="/manifest.json">
    <meta name="msapplication-TileColor" content="#ffffff">
    <meta name="msapplication-TileImage" content="//codeforces.com/codeforces.org/s/99808/ms-icon-144x144.png">
    <meta name="theme-color" content="#ffffff">

    <!--CombineResourcesFilter-->
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/prettify.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/clear.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/style.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/ttypography.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/problem-statement.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/second-level-menu.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/roundbox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/datatable.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/table-form.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/topic.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/jquery.jgrowl.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/facebox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/jquery.wysiwyg.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/jquery.autocomplete.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/codeforces.datepick.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/colorbox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/jquery.drafts.css" type="text/css" charset="utf-8" />
        <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/css/community.css" type="text/css" charset="utf-8" />

    <!-- MathJax -->
    <script type="text/x-mathjax-config">
    MathJax.Hub.Config({
      tex2jax: {inlineMath: [['$$$','$$$']], displayMath: [['$$$$$$','$$$$$$']]}
    });
    MathJax.Hub.Register.StartupHook("End", function () {
        Codeforces.runMathJaxListeners();
    });
    </script>
    <script type="text/javascript" async
            src="https://codeforces.com/mathjax.codeforces.org/MathJax.js?config=TeX-AMS_HTML-full"
    >
    </script>
    <!-- /MathJax -->

    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/prettify/prettify.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/moment-with-locales.min.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/pushstream.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/jquery.easing.min.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/jquery.lavalamp.min.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/jquery.jgrowl.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/jquery.swipe.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/jquery.hotkeys.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/facebox.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/jquery.wysiwyg.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/controls/wysiwyg.colorpicker.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/controls/wysiwyg.table.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/controls/wysiwyg.image.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/controls/wysiwyg.link.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/jquery.autocomplete.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/jquery.datepick.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/jquery.ie6blocker.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/jquery.colorbox-min.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/jquery.ba-bbq.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/jquery.drafts.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/clipboard.min.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/autosize.min.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/sjcl.js"></script>
    <script type="text/javascript" src="/scripts/d6b8c0649264c6ea7119890ab0789bda/en/codeforces-options.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/codeforces.js?v=20160131"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/EventCatcher.js?v=20160131"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/preparedVerdictFormats-en.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/confetti.min.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/js/purify.min.js"></script>
    <!--/CombineResourcesFilter-->

    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/markitup/skins/markitup/style.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//codeforces.com/codeforces.org/s/99808/markitup/sets/markdown/style.css" type="text/css" charset="utf-8" />


    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/markitup/jquery.markitup.js"></script>
    <script type="text/javascript" src="//codeforces.com/codeforces.org/s/99808/markitup/sets/markdown/set.js"></script>

    <!--[if IE]>
    <style>
        #sidebar {
            padding-left: 1em;
            margin: 1em 1em 1em 0;
        }
    </style>
    <![endif]-->




</head>
<body class=" "><span style='display:none;' class='csrf-token' data-csrf='9c0af150cc1e9fd52de2400424dc0f85'>&nbsp;</span>

<!-- .notificationTextCleaner used in Codeforces.showAnnouncements() -->
<div class="notificationTextCleaner" style="font-size: 0"></div>
<div class="button-up" style="display: none; opacity: 0.7; width: 50px; height:100%; position: fixed; left: 0; top: 0; cursor: pointer; text-align: center; line-height: 35px; color: #d3dbe4; font-weight: bold; font-size: 3.0rem;"><i class="icon-circle-arrow-up"></i></div>
<div class="verdictPrototypeDiv" style="display: none;"></div>

<!-- Codeforces JavaScripts. -->
<script type="text/javascript">
    String.prototype.hashCode = function() {
        var hash = 0, i, chr;
        if (this.length === 0) return hash;
        for (i = 0; i < this.length; i++) {
            chr   = this.charCodeAt(i);
            hash  = ((hash << 5) - hash) + chr;
            hash |= 0; // Convert to 32bit integer
        }
        return hash;
    };

    var queryMobile = Codeforces.queryString.mobile;
    if (queryMobile === "true" || queryMobile === "false") {
        Codeforces.putToStorage("useMobile", queryMobile === "true");
    } else {
        var useMobile = Codeforces.getFromStorage("useMobile");
        if (useMobile === true || useMobile === false) {
            if (useMobile != false) {
                Codeforces.redirect(Codeforces.updateUrlParameter(document.location.href, "mobile", useMobile));
            }
        }
    }
</script>

<script type="text/javascript">
    if (window.parent.frames.length > 0) {
        window.stop();
    }
</script>





    <script type="text/javascript">
        $(document).ready(function () {
    (function () {
        jQuery.expr[':'].containsCI = function(elem, index, match) {
            return !match || !match.length || match.length < 4 || !match[3] || (
                    elem.textContent || elem.innerText || jQuery(elem).text() || ''
            ).toLowerCase().indexOf(match[3].toLowerCase()) >= 0;
        }
    }(jQuery));

    $.ajaxPrefilter(function(options, originalOptions, xhr) {
        var csrf = Codeforces.getCsrfToken();

        if (csrf) {
            var data = originalOptions.data;
            if (originalOptions.data !== undefined) {
                if (Object.prototype.toString.call(originalOptions.data) === '[object String]') {
                    data = $.deparam(originalOptions.data);
                }
            } else {
                data = {};
            }
            options.data = $.param($.extend(data, { csrf_token: csrf }));
        }
    });

    window.getCodeforcesServerTime = function(callback) {
        $.post("/data/time", {}, callback, "json");
    }

    window.updateTypography = function () {
        $("div.ttypography code").addClass("tt");
        $("div.ttypography pre>code").addClass("prettyprint").removeClass("tt");
        $("div.ttypography table").addClass("bordertable");
        prettyPrint();
    }

    $.ajaxSetup({ scriptCharset: "utf-8" ,contentType: "application/x-www-form-urlencoded; charset=UTF-8", headers: {
        'X-Csrf-Token': Codeforces.getCsrfToken()
    }, beforeSend: function(jqXHR, settings) {
        const url = new URL(settings.url, window.location.href);
        const urlHref = url.href;
        url.searchParams.set('rv', Math.random().toString(36).substr(2, 9)); // Generate a random value
        settings.url = url.href;
    }});

    window.updateTypography();
    Codeforces.signForms();
    Codeforces.applyDatatableJs("Hold Ctrl+Alt and click to hide column. Also, you can drag&drop columns to reorder them.");

    setTimeout(function() {
        $(".second-level-menu-list").lavaLamp({
            fx: "backout",
            speed: 700
        });
    }, 100);


    Codeforces.countdown();
    $("a[rel='photobox']").colorbox();


    function showAnnouncements(json) {
        if (json.t === "a") {
            setTimeout(function() {
               Codeforces.showAnnouncements(json.d, "en");
            }, Math.random() * 500);
        }
    }

    function showEventCatcherUserMessage(json) {
        if (json.t === "s") {
            var points = json.d[5];
            var passedTestCount = json.d[7];
            var judgedTestCount = json.d[8];
            var verdict = preparedVerdictFormats[json.d[12]];
            var verdictPrototypeDiv = $(".verdictPrototypeDiv");
            verdictPrototypeDiv.html(verdict);
            if (judgedTestCount != null && judgedTestCount != undefined) {
                verdictPrototypeDiv.find(".verdict-format-judged").text(judgedTestCount);
            }
            if (passedTestCount != null && passedTestCount != undefined) {
                verdictPrototypeDiv.find(".verdict-format-passed").text(passedTestCount);
            }
            if (points != null && points != undefined) {
                verdictPrototypeDiv.find(".verdict-format-points").text(points);
            }
            Codeforces.showMessage(verdictPrototypeDiv.text());
        }
    }

    $(".clickable-title").each(function() {
        var title = $(this).attr("data-title");
        if (title) {
            var tmp = document.createElement("DIV");
            tmp.innerHTML = title;
            $(this).attr("title", tmp.textContent || tmp.innerText || "");
        }
    });

    $(".clickable-title").click(function() {
        const title = $(this).attr("data-title");
        const clazz = $(this).attr("data-clazz");
        const props = {};
        if (typeof (clazz) !== 'undefined') {
            props['clazz'] = clazz;
        }
        if (title) {
            Codeforces.alert(title, null, null, props);
        } else {
            Codeforces.alert($(this).attr("title"), null, null, props);
        }
    }).css("position", "relative").css("bottom", "3px");

        Codeforces.showMessage("Illegal contest ID");

    Codeforces.reformatTimes();

    //Codeforces.initializePubSub();
    if (window.codeforcesOptions.subscribeServerUrl) {
        window.eventCatcher = new EventCatcher(
            window.codeforcesOptions.subscribeServerUrl,
            [
                Codeforces.getGlobalChannel(),
                Codeforces.getUserChannel(),
                Codeforces.getUserShowMessageChannel(),
                Codeforces.getContestChannel(),
                Codeforces.getParticipantChannel(),
                Codeforces.getTalkChannel()
            ]
        );

        if (Codeforces.getParticipantChannel()) {
            window.eventCatcher.subscribe(Codeforces.getParticipantChannel(), function(json) {
                showAnnouncements(json);
            });
        }

        if (Codeforces.getContestChannel()) {
            window.eventCatcher.subscribe(Codeforces.getContestChannel(), function(json) {
                showAnnouncements(json);
            });
        }

        if (Codeforces.getGlobalChannel()) {
            window.eventCatcher.subscribe(Codeforces.getGlobalChannel(), function(json) {
                showAnnouncements(json);
            });
        }

        if (Codeforces.getUserChannel()) {
            window.eventCatcher.subscribe(Codeforces.getUserChannel(), function(json) {
                showAnnouncements(json);
            });
        }

        if (Codeforces.getUserShowMessageChannel()) {
            window.eventCatcher.subscribe(Codeforces.getUserShowMessageChannel(), function(json) {
                showEventCatcherUserMessage(json);
            });
        }
    }

    Codeforces.setupContestTimes("/data/contests");
    Codeforces.setupSpoilers();
    Codeforces.setupTutorials("/data/problemTutorial");
        });
    </script>


<div id="body">
        

<div class="side-bell" style="visibility: hidden; display: none; opacity: 0.7; width: 40px; position: fixed; right: 0; top: 0; cursor: pointer; text-align: center; line-height: 35px; color: #d3dbe4; font-weight: bold; font-size: 1.5rem;">
    <span class="icon-stack" style="width: 100%;">
        <i class="icon-circle icon-stack-base"></i>
        <i class="icon-bell-alt icon-light"></i>
    </span>
    <br/>
    <span class="side-bell__count" style="position: relative; top: -10px;"></span>
</div>


<div id="header" style="position: relative;">

    <div style="float:left; max-height: 60px;">
                <a href="/"><img height="65" style="height: 65px;" alt="Codeforces"
                                                         title="Codeforces"
                                                         src="//codeforces.com/codeforces.org/s/99808/images/codeforces-sponsored-by-ton.png"/></a>
    </div>
    <div class="lang-chooser">
            <div style="text-align: right;">
                <a href="?locale=en"><img src="//codeforces.com/codeforces.org/s/99808/images/flags/24/gb.png" title="In English"
                                                         alt="In English"/></a>
                <a href="?locale=ru"><img src="//codeforces.com/codeforces.org/s/99808/images/flags/24/ru.png" title="По-русски"
                                                         alt="По-русски"/></a>
            </div>

        <div >
                        <a href="/enter?back=%2F">Enter</a>
                     | 
                        <a href="/register">Register</a>
                    
        </div>

    </div>
    <br style="clear: both;"/>
</div>

        


    <div class="roundbox menu-box borderTopRound borderBottomRound" style="">
    <div class="menu-list-container">
    <ul class="menu-list main-menu-list">
                <li class="current"><a href="/">Home</a></li>
                <li class=""><a href="/top">Top</a></li>
                <li class=""><a href="/catalog">Catalog</a></li>
                <li class=""><a href="/contests">Contests</a></li>
                <li class=""><a href="/gyms">Gym</a></li>
                <li class=""><a href="/problemset">Problemset</a></li>
                <li class=""><a href="/groups">Groups</a></li>
                <li class=""><a href="/ratings">Rating</a></li>
                <li class=""><a href="/edu/courses"><span class="edu-menu-item">Edu</span></a></li>
                <li class=""><a href="/apiHelp">API</a></li>
                <li class=""><a href="/calendar">Calendar</a></li>
                <li class=""><a href="/help">Help</a></li>
    </ul>
        <form method="post" action="/search"><input type='hidden' name='csrf_token' value='9c0af150cc1e9fd52de2400424dc0f85'/>
            <input class="search" name="query" data-isPlaceholder="true" value=""/>
        </form>
    <br style="clear: both;"/>
</div>

    </div>

    <script type="text/javascript">
        $(document).ready(function () {
            $("input.search").focus(function () {
                if ($(this).attr("data-isPlaceholder") === "true") {
                    $(this).val("");
                    $(this).removeAttr("data-isPlaceholder");
                }
            });
        });
    </script>
        
            <br style="height: 3em; clear: both;"/>

        <div style="position: relative;">
                        <div id="sidebar">

    <div class="roundbox sidebox borderTopRound " style="">
        <div class="caption titled">&rarr; Pay attention
            <div class="top-links">
            </div>
        </div>
<div style="padding: 0.5em;">
        <div style="text-align:center;">
            <span class='contest-state-phase'>Before contest</span><br/><a href="/contests/2211">Codeforces Round 1088 (Div. 1 + Div. 2)</a><br/><span class='countdown' home='//codeforces.com/codeforces.org/s/99808' noRedirection='true' textBeforeRedirect=''><span title="120:43:41">5 days</span></span><br/><a href="/contestRegistration/2211">Register now »</a><div class="smaller notice">*has extra registration<i class="icon-question-sign clickable-title" title="If you are late to register in 5 minutes before the start, you can register later during the extra registration. Extra registration opens 10 minutes after the contest starts and lasts 20 minutes."></i></div>
        </div>
</div>
    </div>

<style data-nocturne="true" type="text/css">
._StreamsSidebarFrame_frame {
  padding: 0.5em 0.5em 0 0.5em;
}
._StreamsSidebarFrame_frame ._StreamsSidebarFrame_stream {
  text-align: center;
  border-bottom: 1px solid #b9b9b9;
  margin: 0 -0.5em 0.5em -0.5em;
  padding: 0 1em 0.5em 1em;
}
._StreamsSidebarFrame_frame ._StreamsSidebarFrame_stream ._StreamsSidebarFrame_user {
  margin: 0 0 0.5em 0;
  font-size: 0.8em;
}
._StreamsSidebarFrame_frame ._StreamsSidebarFrame_stream ._StreamsSidebarFrame_timeMark {
  color: #777;
  font-size: 0.9em;
}
._StreamsSidebarFrame_frame ._StreamsSidebarFrame_stream:last-of-type {
  border-bottom: unset;
  margin: unset;
  padding: 0 0.5em 0.5em 1em;
}
._StreamsSidebarFrame_frame ._viewAll {
  text-align: right;
}
.moreRunningStreamsSidebarNote {
  color: #777 !important;
  text-decoration: none;
}
</style>


<script data-nocturne="true"> $(function () {

}); </script>

<div class="roundbox sidebox top-contributed borderTopRound " style="">
<div class="caption titled">&rarr; Top rated
<div class="top-links">
</div>
</div>
<table class="rtable ">
<tbody>
<tr>
<th class="left" style="width:2.25em;">#</th>
<th class="">User</th>
<th class="" style="width:5em;">Rating</th>
</tr>
<tr>
<td class="left dark">1</td>
<td class=" dark"><a href="/profile/ecnerwala" title="Legendary Grandmaster ecnerwala" class="rated-user user-legendary"><span class="legendary-user-first-letter">e</span>cnerwala</a></td>
<td class=" dark">3843</td>
</tr>
<tr>
<td class="left ">2</td>
<td class=""><a href="/profile/Benq" title="Legendary Grandmaster Benq" class="rated-user user-legendary"><span class="legendary-user-first-letter">B</span>enq</a></td>
<td class="">3792</td>
</tr>
<tr>
<td class="left dark">3</td>
<td class=" dark"><a href="/profile/tourist" title="Legendary Grandmaster tourist" class="rated-user user-legendary"><span class="legendary-user-first-letter">t</span>ourist</a></td>
<td class=" dark">3718</td>
</tr>
<tr>
<td class="left ">4</td>
<td class=""><a href="/profile/VivaciousAubergine" title="Legendary Grandmaster VivaciousAubergine" class="rated-user user-legendary"><span class="legendary-user-first-letter">V</span>ivaciousAubergine</a></td>
<td class="">3646</td>
</tr>
<tr>
<td class="left dark">5</td>
<td class=" dark"><a href="/profile/jiangly" title="Legendary Grandmaster jiangly" class="rated-user user-legendary"><span class="legendary-user-first-letter">j</span>iangly</a></td>
<td class=" dark">3614</td>
</tr>
<tr>
<td class="left ">6</td>
<td class=""><a href="/profile/ksun48" title="Legendary Grandmaster ksun48" class="rated-user user-legendary"><span class="legendary-user-first-letter">k</span>sun48</a></td>
<td class="">3593</td>
</tr>
<tr>
<td class="left dark">7</td>
<td class=" dark"><a href="/profile/Kevin114514" title="Legendary Grandmaster Kevin114514" class="rated-user user-legendary"><span class="legendary-user-first-letter">K</span>evin114514</a></td>
<td class=" dark">3490</td>
</tr>
<tr>
<td class="left ">8</td>
<td class=""><a href="/profile/strapple" title="Legendary Grandmaster strapple" class="rated-user user-legendary"><span class="legendary-user-first-letter">s</span>trapple</a></td>
<td class="">3486</td>
</tr>
<tr>
<td class="left dark">9</td>
<td class=" dark"><a href="/profile/dXqwq" title="Legendary Grandmaster dXqwq" class="rated-user user-legendary"><span class="legendary-user-first-letter">d</span>Xqwq</a></td>
<td class=" dark">3436</td>
</tr>
<tr>
<td class="left bottom">10</td>
<td class="bottom"><a href="/profile/Otomachi_Una" title="Legendary Grandmaster Otomachi_Una" class="rated-user user-legendary"><span class="legendary-user-first-letter">O</span>tomachi_Una</a></td>
<td class="bottom">3413</td>
</tr>
</tbody>
</table>
<div class="bottom-links">
<table style="width:100%;">
<tbody>
<tr>
<td style="text-align:left;">
<a href="/ratings/countries">Countries</a> |
<a href="/ratings/cities">Cities</a> |
<a href="/ratings/organizations">Organizations</a>
</td>
<td style="text-align:right;">
<a href="/ratings">View all &rarr;</a>
</td>
</tr>
</tbody>
</table>
</div>
</div><div class="roundbox sidebox top-contributed borderTopRound " style="">
        <div class="caption titled">&rarr; Top contributors
            <div class="top-links">
            </div>
        </div>
        <table class="rtable ">
            <tbody>
                <tr>
                            <th class="left" style="width:2.25em;">#</th>
                            <th class="">User</th>
                            <th class="" style="width:5em;">Contrib.</th>
                </tr>
                    <tr>
                                <td class="left  dark">1</td>
                                <td class=" dark"><a href="/profile/Qingyu" title="Legendary Grandmaster Qingyu" class="rated-user user-legendary"><span class="legendary-user-first-letter">Q</span>ingyu</a></td>
                                <td class=" dark">159</td>
                    </tr>
                    <tr>
                                <td class="left ">2</td>
                                <td class=""><a href="/profile/adamant" title="Master adamant" class="rated-user user-orange">adamant</a></td>
                                <td class="">153</td>
                    </tr>
                    <tr>
                                <td class="left  dark">2</td>
                                <td class=" dark"><a href="/profile/Um_nik" title="Legendary Grandmaster Um_nik" class="rated-user user-legendary"><span class="legendary-user-first-letter">U</span>m_nik</a></td>
                                <td class=" dark">153</td>
                    </tr>
                    <tr>
                                <td class="left ">4</td>
                                <td class=""><a href="/profile/errorgorn" title="Legendary Grandmaster errorgorn" class="rated-user user-legendary"><span class="legendary-user-first-letter">e</span>rrorgorn</a></td>
                                <td class="">149</td>
                    </tr>
                    <tr>
                                <td class="left  dark">5</td>
                                <td class=" dark"><a href="/profile/Dominater069" title="Legendary Grandmaster Dominater069" class="rated-user user-legendary"><span class="legendary-user-first-letter">D</span>ominater069</a></td>
                                <td class=" dark">148</td>
                    </tr>
                    <tr>
                                <td class="left ">6</td>
                                <td class=""><a href="/profile/Proof_by_QED" title="International Master Proof_by_QED" class="rated-user user-orange">Proof_by_QED</a></td>
                                <td class="">141</td>
                    </tr>
                    <tr>
                                <td class="left  dark">6</td>
                                <td class=" dark"><a href="/profile/cry" title="International Master cry" class="rated-user user-orange">cry</a></td>
                                <td class=" dark">141</td>
                    </tr>
                    <tr>
                                <td class="left ">8</td>
                                <td class=""><a href="/profile/Arpa" title="Master Arpa" class="rated-user user-orange">Arpa</a></td>
                                <td class="">140</td>
                    </tr>
                    <tr>
                                <td class="left  dark">9</td>
                                <td class=" dark"><a href="/profile/soullless" title="Master soullless" class="rated-user user-orange">soullless</a></td>
                                <td class=" dark">137</td>
                    </tr>
                    <tr>
                                <td class="left bottom">10</td>
                                <td class="bottom"><a href="/profile/TheScrasse" title="Grandmaster TheScrasse" class="rated-user user-red">TheScrasse</a></td>
                                <td class="bottom">136</td>
                    </tr>
            </tbody>
        </table>
            <div class="bottom-links">
                <table style="width:100%;">
                    <tbody>
                        <tr>
                            <td style="text-align:left;">
                            </td>
                            <td style="text-align:right;">
                                    <a href="/top-contributed">View all &rarr;</a>
                            </td>
                        </tr>
                    </tbody>
                </table>
            </div>
    </div>

    <script type="text/javascript">
        $(document).ready(function () {
        });
    </script>


    <div class="roundbox sidebox borderTopRound " style="">
        <div class="caption titled">&rarr; Find user
            <div class="top-links">
            </div>
        </div>
        <form class="handleForm" method="post"><input type='hidden' name='csrf_token' value='9c0af150cc1e9fd52de2400424dc0f85'/>
            <div style="padding:1em;text-align:right;">
                <label style="padding-right:1em;">Handle:
                    <input style="width:12em;" type="text" class="handleBox"/>
                </label>
            </div>
            <div style="padding: 0 1em 1em 1em;text-align:right;">
                <input style="height:1.65em;padding:0 0.75em;" type="submit" value="Find"/>
            </div>
        </form>
    </div>
    <script type="text/javascript">
        $(document).ready(function () {
    $(".handleBox").autocompleteHandle();
    $(".handleForm").attr("autocomplete", "off").submit(function () {
        var link = "/profile/userHandle".replace(
            "userHandle", $(this).find(".handleBox").val()
        );
        window.location = link;
        return false;
    });
        });
    </script>


<div class="roundbox sidebox borderTopRound " style="">
        <div class="caption titled">&rarr; Recent actions
            <div class="top-links">
            </div>
        </div>
        <div class="recent-actions">
            <ul>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/MieAi." title="Candidate Master MieAi." class="rated-user user-violet">MieAi.</a>        &rarr;
        <a href="/blog/entry/152324">Need help with a Geometry problem</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/FairyWinx" title="Grandmaster FairyWinx" class="rated-user user-red">FairyWinx</a>        &rarr;
        <a href="/blog/entry/125943">Codeforces Round #926 (Div. 2) Editorial.</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
        <img alt="Necropost" title="Necropost" src="//codeforces.com/codeforces.org/s/99808/images/icons/hourglass.png"  style="vertical-align:middle; position: relative; top: 1px;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/vn4k" title="Expert vn4k" class="rated-user user-blue">vn4k</a>        &rarr;
        <a href="/blog/entry/152289">Enough Is Enough: A Concrete Plan to Tackle Cheating on Codeforces</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/OtterZ" title="Master OtterZ" class="rated-user user-orange">OtterZ</a>        &rarr;
        <a href="/blog/entry/151662">Codeforces Round 1087 (Div. 2) Announcement</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/AlexandruINV" title="Expert AlexandruINV" class="rated-user user-blue">AlexandruINV</a>        &rarr;
        <a href="/blog/entry/151914">A Friendly Competitive Programming Discord Server!</a>
&nbsp;&nbsp;<img alt="Text created or updated" title="Text created or updated" src="//codeforces.com/codeforces.org/s/99808/images/icons/x-update-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/npgnghi2003" title="Expert npgnghi2003" class="rated-user user-blue">npgnghi2003</a>        &rarr;
        <a href="/blog/entry/85171">Help me in Codeforces Polygon checker writing</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
        <img alt="Necropost" title="Necropost" src="//codeforces.com/codeforces.org/s/99808/images/icons/hourglass.png"  style="vertical-align:middle; position: relative; top: 1px;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/DuyMinh3005" title="Pupil DuyMinh3005" class="rated-user user-green">DuyMinh3005</a>        &rarr;
        <a href="/blog/entry/152286">The fastest way to become a LGM.</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/a130" title="Pupil a130" class="rated-user user-green">a130</a>        &rarr;
        <a href="/blog/entry/147472">Help with CSES problems</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/thaibaotran555" title="Candidate Master thaibaotran555" class="rated-user user-violet">thaibaotran555</a>        &rarr;
        <a href="/blog/entry/152294">Potential suspicious cheating acitivity in the recent division 2 (1087)</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/ZhangShan" title="Expert ZhangShan" class="rated-user user-blue">ZhangShan</a>        &rarr;
        <a href="/blog/entry/152090">usaco.org wouldn&#39;t let me register — so I built my own judge with all 484 USACO problems</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/E869120" title="International Grandmaster E869120" class="rated-user user-red">E869120</a>        &rarr;
        <a href="/blog/entry/152235">JOI Final Stage 2026 Online Contest</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/awoo" title="Grandmaster awoo" class="rated-user user-red">awoo</a>        &rarr;
        <a href="/blog/entry/152150">Educational Codeforces Round 188 Editorial</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/cel.in" title="Master cel.in" class="rated-user user-orange">cel.in</a>        &rarr;
        <a href="/blog/entry/152256">Croatian Open Competition in Informatics (COCI) 2025/2026 — Round #6</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/cel.in" title="Master cel.in" class="rated-user user-orange">cel.in</a>        &rarr;
        <a href="/blog/entry/148600">Croatian Open Competition in Informatics (COCI) 2025/2026 — Round #2</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/ismailfateen" title="Master ismailfateen" class="rated-user user-orange">ismailfateen</a>        &rarr;
        <a href="/blog/entry/149719">ICPC WF 2026 Team List</a>
&nbsp;&nbsp;<img alt="Text created or updated" title="Text created or updated" src="//codeforces.com/codeforces.org/s/99808/images/icons/x-update-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/amartya110" title="Pupil amartya110" class="rated-user user-green">amartya110</a>        &rarr;
        <a href="/blog/entry/151880">Invitation to CodeHurdle Athlos 03 Contest — March 17, 2026</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/SuryaHalder" title="Specialist SuryaHalder" class="rated-user user-cyan">SuryaHalder</a>        &rarr;
        <a href="/blog/entry/152313">VSCode Extension for visualizing graphs</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/chromate00" title="Expert chromate00" class="rated-user user-blue">chromate00</a>        &rarr;
        <a href="/blog/entry/151515">Codeforces Round 1082 (Div. 1, Div. 2) Complete Editorial</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/chromate00" title="Expert chromate00" class="rated-user user-blue">chromate00</a>        &rarr;
        <a href="/blog/entry/147322">Codeforces Round 1058 Editorial</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/pilliamw" title="Expert pilliamw" class="rated-user user-blue">pilliamw</a>        &rarr;
        <a href="/blog/entry/152309">Dead Codeforces Theory</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/adaptatron" title="Newbie adaptatron" class="rated-user user-gray">adaptatron</a>        &rarr;
        <a href="/blog/entry/152298">[Video][Brain Gym, Ep1]: Dealing with Lexical ordering of Arrays</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/MathModel" title="Expert MathModel" class="rated-user user-blue">MathModel</a>        &rarr;
        <a href="/blog/entry/152310">Invitation to Eolymp Weekend Practice #21 (Higher Difficulty)</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/MikeMirzayanov" title="Headquarters, MikeMirzayanov" class="rated-user user-admin">MikeMirzayanov</a>        &rarr;
        <a href="/blog/entry/133941">Rule Restricting the Use of AI [revision 2024-09-14]</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
        <img alt="Necropost" title="Necropost" src="//codeforces.com/codeforces.org/s/99808/images/icons/hourglass.png"  style="vertical-align:middle; position: relative; top: 1px;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/D_ck" title="Expert D_ck" class="rated-user user-blue">D_ck</a>        &rarr;
        <a href="/blog/entry/152279">Accounts that are 99% alts</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
                        <li><div style="font-size:0.9em;padding:0.5em 0;">
<a href="/profile/Qingyu" title="Legendary Grandmaster Qingyu" class="rated-user user-legendary"><span class="legendary-user-first-letter">Q</span>ingyu</a>        &rarr;
        <a href="/blog/entry/152288">Partial Scores in ICPC Contests</a>
&nbsp;&nbsp;<img alt="New comment(s)" title="New comment(s)" src="//codeforces.com/codeforces.org/s/99808/images/icons/comment-12x12.png" style="vertical-align:middle;"/>
</div>
</li>
            </ul>
        </div>
            <div class="bottom-links">
                <table style="width:100%;">
                    <tbody>
                        <tr>
                            <td style="text-align:left;">
                            </td>
                            <td style="text-align:right;">
                                    <a href="/recent-actions">Detailed &rarr;</a>
                            </td>
                        </tr>
                    </tbody>
                </table>
            </div>
    </div></div>
                        <div id="pageContent" class="content-with-sidebar">
<div style="margin-bottom:2em;">


<div class="has-topic-id topic" topicId="152303">
    <div class="title">
            <a href="/blog/entry/151662">            <p>Codeforces Round 1087 (Div. 2) Announcement</p>
</a>
    </div>

        <div class="info" style="position:relative;">
                By&nbsp;<a href="/profile/OtterZ" title="Master OtterZ" class="rated-user user-orange">OtterZ</a>,
                    <a href="/topic/152303/en13">history</a>,
                    <span class="format-humantime" title="Feb/28/2026 06:26">3 weeks ago</span>,
                
                <img style="position: relative;top: 5px;" src="//codeforces.com/codeforces.org/s/99808/images/flags/24/gb.png" alt="In English" title="In English"/>



            <div class="topic-actions smaller">
                <ul>


                </ul>
            </div>
        </div>

    <div class="content">
        <div class="ttypography"><p>Hello, Codeforces!</p><p><img alt="Alt text here" src="/predownloaded/c8/5e/c85eb6745a5c1ff6745d771e471550bc9219156b.png" style="float: right;height: 150.0px;margin: 10.0px;max-width: 100.0%;max-height: 100.0%;" /></p><p><a class="rated-user user-red" href="/profile/__baozii__" title="International Grandmaster __baozii__">__baozii__</a> and I are glad to invite you to participate in <a href="/contest/2209" title="Codeforces Round 1087 (Div. 2)">Codeforces Round 1087 (Div. 2)</a>. The round will take place at <a class="contest-time" contestid="2209" href="https://www.timeanddate.com/worldclock/fixedtime.html?day=21&amp;month=3&amp;year=2026&amp;hour=17&amp;min=35&amp;sec=0&amp;p1=166"><span class="format-time-with-dow">Mar/21/2026 17:35 (Moscow time)</span></a>. There will be $$$6$$$ problems, and you will have $$$2$$$ hours to solve them. The round will be held according to the Codeforces rules and will be rated for division $$$2$$$.</p><p>At least one problem will be interactive, so we highly recommend you to read <a href="https://codeforces.com/blog/entry/45307">guide for interactive problems</a> before the contest.</p><p><strong>UPD: score distribution:</strong>$$$500 - 750 - 1500 - 1750 - 2250 - 3000$$$.<br /><strong>UPD:</strong><a href="https://codeforces.com/blog/entry/152272">editorial</a></p><p>We would like to thank:</p> <ul>   <li><a class="rated-user user-red" href="/profile/Sugar_fan" title="International Grandmaster Sugar_fan">Sugar_fan</a> for coordination.</li>   <li><a class="rated-user user-orange" href="/profile/Alexdat2000" title="Master Alexdat2000">Alexdat2000</a> for Russian translation.</li>   <li><a class="rated-user user-admin" href="/profile/MikeMirzayanov" title="Headquarters, MikeMirzayanov">MikeMirzayanov</a> and <a class="rated-user user-legendary" href="/profile/KAN" title="Legendary Grandmaster KAN"><span class="legendary-user-first-letter">K</span>AN</a> for the best platform.</li>   <li><a class="rated-user user-legendary" href="/profile/Um_nik" title="Legendary Grandmaster Um_nik"><span class="legendary-user-first-letter">U</span>m_nik</a>, <a class="rated-user user-legendary" href="/profile/Dominater069" title="Legendary Grandmaster Dominater069"><span class="legendary-user-first-letter">D</span>ominater069</a> for nutella testing.</li>   <li><a class="rated-user user-red" href="/profile/Tobo" title="Grandmaster Tobo">Tobo</a>, <a class="rated-user user-red" href="/profile/Intellegent" title="Grandmaster Intellegent">Intellegent</a>, <a class="rated-user user-red" href="/profile/A_G" title="International Grandmaster A_G">A_G</a>, <a class="rated-user user-red" href="/profile/k1r1t0" title="International Grandmaster k1r1t0">k1r1t0</a>, <a class="rated-user user-red" href="/profile/_istil" title="Grandmaster _istil">_istil</a>, <a class="rated-user user-red" href="/profile/nifeshe" title="Grandmaster nifeshe">nifeshe</a> for red testing.</li>   <li><a class="rated-user user-orange" href="/profile/0x3F" title="Master 0x3F">0x3F</a>, <a class="rated-user user-orange" href="/profile/Proof_by_QED" title="International Master Proof_by_QED">Proof_by_QED</a>, <a class="rated-user user-orange" href="/profile/FelixArg" title="Master FelixArg">FelixArg</a>, <a class="rated-user user-orange" href="/profile/DNR" title="Master DNR">DNR</a>, <a class="rated-user user-orange" href="/profile/-firefly-" title="Master -firefly-">-firefly-</a>, <a class="rated-user user-orange" href="/profile/Timosh" title="Master Timosh">Timosh</a>, <a class="rated-user user-orange" href="/profile/Arpa" title="Master Arpa">Arpa</a> for orange testing.</li>   <li><a class="rated-user user-violet" href="/profile/madlogic" title="Candidate Master madlogic">madlogic</a>, <a class="rated-user user-violet" href="/profile/Amao_Fox" title="Candidate Master Amao_Fox">Amao_Fox</a>, <a class="rated-user user-violet" href="/profile/Jamshed11" title="Candidate Master Jamshed11">Jamshed11</a> for purple testing.</li>   <li><a class="rated-user user-blue" href="/profile/chromate00" title="Expert chromate00">chromate00</a>, <a class="rated-user user-blue" href="/profile/simplelife" title="Expert simplelife">simplelife</a>, <a class="rated-user user-blue" href="/profile/Argentum47" title="Expert Argentum47">Argentum47</a>, <a class="rated-user user-blue" href="/profile/satyam343" title="Expert satyam343">satyam343</a>, <a class="rated-user user-blue" href="/profile/SkyWave2022" title="Expert SkyWave2022">SkyWave2022</a> for blue testing.</li> </ul><p>Wishing everyone good luck and high ratings!</p><p>upd:</p><p>top $$$10$$$:</p> <ol>   <li><a class="rated-user user-orange" href="/profile/DrAsm" title="Master DrAsm">DrAsm</a></li>   <li><a class="rated-user user-orange" href="/profile/bismispis" title="International Master bismispis">bismispis</a></li>   <li><a class="rated-user user-red" href="/profile/415411" title="International Grandmaster 415411">415411</a></li>   <li><a class="rated-user user-red" href="/profile/TripleM5da" title="Grandmaster TripleM5da">TripleM5da</a></li>   <li><a class="rated-user user-legendary" href="/profile/StarSilk" title="Legendary Grandmaster StarSilk"><span class="legendary-user-first-letter">S</span>tarSilk</a></li>   <li><a class="rated-user user-green" href="/profile/undefined_Ryan" title="Pupil undefined_Ryan">undefined_Ryan</a></li>   <li><a class="rated-user user-legendary" href="/profile/maspy" title="Legendary Grandmaster maspy"><span class="legendary-user-first-letter">m</span>aspy</a></li>   <li><a class="rated-user user-violet" href="/profile/Celesse" title="Candidate Master Celesse">Celesse</a></li>   <li><a class="rated-user user-orange" href="/profile/kjp4155" title="Master kjp4155">kjp4155</a></li>   <li><a class="rated-user user-orange" href="/profile/Cody473" title="Master Cody473">Cody473</a></li> </ol><p>top $$$10$$$ rated:</p> <ol>   <li><a class="rated-user user-orange" href="/profile/DrAsm" title="Master DrAsm">DrAsm</a></li>   <li><a class="rated-user user-orange" href="/profile/bismispis" title="International Master bismispis">bismispis</a></li>   <li><a class="rated-user user-green" href="/profile/undefined_Ryan" title="Pupil undefined_Ryan">undefined_Ryan</a></li>   <li><a class="rated-user user-violet" href="/profile/Celesse" title="Candidate Master Celesse">Celesse</a></li>   <li><a class="rated-user user-orange" href="/profile/kjp4155" title="Master kjp4155">kjp4155</a></li>   <li><a class="rated-user user-orange" href="/profile/Cody473" title="Master Cody473">Cody473</a></li>   <li><a class="rated-user user-gray" href="/profile/CokeScientist" title="Newbie CokeScientist">CokeScientist</a></li>   <li><a class="rated-user user-gray" href="/profile/jnccyyyq" title="Newbie jnccyyyq">jnccyyyq</a></li>   <li><a class="rated-user user-blue" href="/profile/AJ123496" title="Expert AJ123496">AJ123496</a></li>   <li><a class="rated-user user-gray" href="/profile/nihaaleee" title="Newbie nihaaleee">nihaaleee</a></li> </ol><p>Notes that there will be an update about the top $$$10$$$ after roll-back.</p></div>

            <p class="topic-options">
                <a class="topic-read-more" href="/blog/entry/151662">Full text and comments »</a>
            </p>
    </div>


        <div style="font-size: 1.1rem;line-height: 1.1rem;padding-bottom: 0.5em;">
            <img src="//codeforces.com/codeforces.org/s/99808/images/icons/paperclip-16x16.png" style="vertical-align: middle;"/> <span style="padding: 0 0.35em;">Announcement of <a href="/contest/2209" class="notice" style="text-decoration: none;">Codeforces Round 1087 (Div. 2)</a> </span>
        </div>
        
            <script type="text/javascript">
    $(document).ready(function () {
        $(".delete-resource-link-258975-152303").click(function() {
            var that = this;
            Codeforces.confirm("Are you sure you want to detach a contest?", function () {
                $.post("/data/blogAndContest", {
                    action: "detachBlogFromContest",
                    blogId: "258975",
                    blogEntryId: "151662",
                    contestId: $(that).attr("data-contestId"),
                    resourceIds: $(that).attr("data-resourceIds")
                }, function(json) {        
                    Codeforces.reloadAndShowMessageOrShowError(json, "Contest detached");
                });
            }, function () {}, "Yes", "No");
        });
    });
</script>
        



    <div class="roundbox meta borderTopRound borderBottomRound" style="">
        <div class="left-meta">
            <ul>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-up-152303"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/voteup-gray.png"
            alt="Vote: I like it" title="Vote: I like it"
        /></a>


</li>
                    <li style="line-height: 1.6em;">

        
        <span class="topic-rating topic-rating-152303" title="Topic rating" data-topicId=152303 data-rawRating=135 style='font-size:larger;position:relative;bottom:1px;font-weight:bold;color:green'>+135</span>
        
</li>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-down-152303"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/votedown-gray.png"
            alt="Vote: I do not like it" title="Vote: I do not like it"
        /></a>


</li>
            </ul>
        </div>


            <span style="position: relative; line-height: 1.65em; top: 0.75rem; left: 0.8em;">
            </span>

        <div class="right-meta">
            <ul>
                    <li>        <a href="/profile/OtterZ"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/user_16x16.png"
            alt="Author" title="Author"
        /></a>


        <a href="/profile/OtterZ">
        OtterZ
        </a>
</li>
                    <li>        <img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/date_16x16.png"
            alt="Publication date" title="Publication date"
        />


        
        <span class="format-humantime" title="Feb/28/2026 06:26">3 weeks ago</span>
        
</li>
                    <li>        <a href="/blog/entry/151662#comments"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/comments_16x16.png"
            alt="Comments" title="Comments"
        /></a>


        <a href="/blog/entry/151662#comments">
        134
        </a>
</li>
            </ul>
        </div>

        <br style="clear:both;"/>
    </div>



    <script>
        function adjustTopicComplainFrames() {
            let topicIds = [];

            $(".has-topic-id").each(function () {
                const $this = $(this);
                const topicId = $this.attr("topicId");
                if (topicId) {
                    topicIds.push(topicId);
                }
            });

            $.post("/data/topics", {
                action: "findComplainableTopicIds",
                topicIds: topicIds.join(",")
            }, function (json) {
                if (json["success"] === "true") {
                    for (const topicId of json["complainableTopicIds"].split(",")) {
                        $(".has-topic-id[topicId=" + topicId + "]").each(function () {
                            $(this).find(".meta .ComplaintFrame").css("display", "inline-block");
                        });
                    }
                }
            }, "json");
        }

        function updateTopicVote(topicId, voteDirection, processed) {
            let ratingElement = $(".topic-rating-" + topicId);
            let newRating = parseInt(ratingElement.attr("data-rawRating"));
            if (!processed) newRating += voteDirection;
            if (newRating > 0) {
                ratingElement.text("+" + newRating.toString());
                ratingElement.css("color", "green");
            } else {
                ratingElement.text(newRating.toString());
                ratingElement.css("color", "gray");
            }
            let voteUpImg = $(".topic-vote-up-" + topicId + " img");
            voteUpImg.attr("src", "//codeforces.com/codeforces.org/s/99808/"
                + (voteDirection === 1 ? "images/actions/voteup-voted.png" : "images/actions/voteup-gray.png"));
            voteUpImg.attr("title", voteDirection === 1 ? "Cancel vote" : "Vote: I like it");
            let voteDownImg = $(".topic-vote-down-" + topicId + " img");
            voteDownImg.attr("src", "//codeforces.com/codeforces.org/s/99808/"
                + (voteDirection === -1 ? "images/actions/votedown-voted.png" : "images/actions/votedown-gray.png"));
            voteDownImg.attr("title", voteDirection === -1 ? "Cancel vote" : "Vote: I do not like it");
        }

        function getMyVotes() {
            let topicIds = [];
            $(".topic-rating").each(function () {
                topicIds.push($(this).attr("data-topicId"))
            });
            $.post("/data/topic/vote", {
                topicIds: topicIds.join(","),
                _tta: Codeforces.tta(),
                action: "getMyVotes"
            }, function (data) {
                if (data.success === "true") {
                    votes = JSON.parse(data.votes);
                    for (const vote of votes) {
                        updateTopicVote(vote.topicId, vote.direction, vote.processed);
                    }
                }
            }, "json");
        }

        $(function () {
        });
    </script>

<script type="text/javascript">
    $(document).ready(function () {
        let voteDirection = 0;

        function clickVote(direction) {
            if (direction === voteDirection) {
                direction = 0;
            }
            $.post("/data/topic/vote", {
                topicId: 152303,
                _tta: Codeforces.tta(),
                topicRevisionId: 426761,
                vote: direction,
            }, function (data) {
                if (data.success === "true") {
                    voteDirection = parseInt(data.voteDirection);
                    updateTopicVote(152303, voteDirection, data.processed === "true");
                }
                Codeforces.showMessage(data.message);
            }, "json");
        }

        $(".topic-vote-up-152303").click(function () {
            clickVote(+1);
            return false;
        });
        $(".topic-vote-down-152303").click(function () {
            clickVote(-1);
            return false;
        });
    });
</script></div>

    <script>
        $(function () {
            $(".topic-action-a").click(function () {
                const action = $(this).data("action");
                const topicTitle = $(this).data("topic-title");

                if (confirm("Are you sure you want to perform the action '" + action.toUpperCase()
                        + "' on the topic '" + topicTitle + "'?")) {
                    const topicId = $(this).data("topic-id");
                    const locale = $(this).data("topic-locale");
                    $.post("/data/topic", {action, topicId, locale}, function (json) {
                        Codeforces.reloadAndShowMessageOrShowError(json, json["message"]);
                    });
                }

                return false;
            });
        });
    </script>
</div>
<div style="margin-bottom:2em;">


<div class="has-topic-id topic" topicId="152382">
    <div class="title">
            <a href="/blog/entry/151741">            <p>Midnight Code Cup is Back</p>
</a>
    </div>

        <div class="info" style="position:relative;">
                By&nbsp;<a href="/profile/MidnightCodeCup" title="Unrated, MidnightCodeCup" class="rated-user user-black">MidnightCodeCup</a>,
                    <a href="/topic/152382/en5">history</a>,
                    <span class="format-humantime" title="Mar/02/2026 15:30">3 weeks ago</span>,
                
                <img style="position: relative;top: 5px;" src="//codeforces.com/codeforces.org/s/99808/images/flags/24/gb.png" alt="In English" title="In English"/>



            <div class="topic-actions smaller">
                <ul>


                </ul>
            </div>
        </div>

    <div class="content">
        <div class="ttypography"><p><strong>TL;DR:</strong> Register for the qualification round at <a href="https://midnightcodecup.com">https://midnightcodecup.com</a></p><p>Last year we decided to revive the craziest problem solving format of all — the 24-hour onsite. It turned out <a href="https://codeforces.com/blog/entry/143717">amazing</a>, so we are bringing more craziness and problems this year.</p><p>We’re supported by incredible sponsors: Recraft, OpenAI, Nebius, Alber Blanc, Revolut, Logical Intelligence, and Pinely. Huge thanks to the teams at these companies for backing problem-solving minds – this is the way.</p><p>Join the qualification round here at Codeforces on April 11th at 1 PM UTC.</p><p>The best 25 teams + 5 wildcards will travel to Belgrade on July 4–5 for a 24-hour final. We can’t wait to see who makes it this year — and the jury will not be shy about challenging you.</p><p>Btw, please give it up for The Jury: <a class="rated-user user-violet" href="/profile/Aksenov239" title="Candidate Master Aksenov239">Aksenov239</a>, <a class="rated-user user-red" href="/profile/qwerty787788" title="International Grandmaster qwerty787788">qwerty787788</a>, <a class="rated-user user-red" href="/profile/cdkrot" title="International Grandmaster cdkrot">cdkrot</a>, <a class="rated-user user-legendary" href="/profile/tourist" title="Legendary Grandmaster tourist"><span class="legendary-user-first-letter">t</span>ourist</a>, <a class="rated-user user-blue" href="/profile/nsychev" title="Expert nsychev">nsychev</a>, <a class="rated-user user-blue" href="/profile/naagi" title="Expert naagi">naagi</a>, <a class="rated-user user-orange" href="/profile/Gassa" title="Master Gassa">Gassa</a>, <a class="rated-user user-orange" href="/profile/Arpa" title="Master Arpa">Arpa</a>, <a class="rated-user user-red" href="/profile/pashka" title="International Grandmaster pashka">pashka</a>, <a class="rated-user user-blue" href="/profile/yulik.daniel" title="Expert yulik.daniel">yulik.daniel</a>, <a class="rated-user user-red" href="/profile/xiaowuc1" title="Grandmaster xiaowuc1">xiaowuc1</a>, <a class="rated-user user-red" href="/profile/isaf27" title="International Grandmaster isaf27">isaf27</a>, <a class="rated-user user-red" href="/profile/mnaeraxr" title="Grandmaster mnaeraxr">mnaeraxr</a> , <a class="rated-user user-red" href="/profile/aropan" title="Grandmaster aropan">aropan</a>, <a class="rated-user user-blue" href="/profile/Solenoid555" title="Expert Solenoid555">Solenoid555</a>.</p><p>Now <a href="https://midnightcodecup.com">go register</a>, follow <a href="https://x.com/midnightcodecup">our newly created X account</a> for updates and..</p><p>See you at Midnight!</p><p><img alt=" " src="/predownloaded/d5/19/d5191c4555874bdeb25e9f40bfa5deafd8faad27.png" style="max-width: 100.0%;max-height: 100.0%;" /></p></div>

            <p class="topic-options">
                <a class="topic-read-more" href="/blog/entry/151741">Full text and comments »</a>
            </p>
    </div>


        
            <script type="text/javascript">
    $(document).ready(function () {
        $(".delete-resource-link-487772-152382").click(function() {
            var that = this;
            Codeforces.confirm("Are you sure you want to detach a contest?", function () {
                $.post("/data/blogAndContest", {
                    action: "detachBlogFromContest",
                    blogId: "487772",
                    blogEntryId: "151741",
                    contestId: $(that).attr("data-contestId"),
                    resourceIds: $(that).attr("data-resourceIds")
                }, function(json) {        
                    Codeforces.reloadAndShowMessageOrShowError(json, "Contest detached");
                });
            }, function () {}, "Yes", "No");
        });
    });
</script>
        



    <div class="roundbox meta borderTopRound borderBottomRound" style="">
        <div class="left-meta">
            <ul>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-up-152382"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/voteup-gray.png"
            alt="Vote: I like it" title="Vote: I like it"
        /></a>


</li>
                    <li style="line-height: 1.6em;">

        
        <span class="topic-rating topic-rating-152382" title="Topic rating" data-topicId=152382 data-rawRating=343 style='font-size:larger;position:relative;bottom:1px;font-weight:bold;color:green'>+343</span>
        
</li>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-down-152382"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/votedown-gray.png"
            alt="Vote: I do not like it" title="Vote: I do not like it"
        /></a>


</li>
            </ul>
        </div>


            <span style="position: relative; line-height: 1.65em; top: 0.75rem; left: 0.8em;">
            </span>

        <div class="right-meta">
            <ul>
                    <li>        <a href="/profile/MidnightCodeCup"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/user_16x16.png"
            alt="Author" title="Author"
        /></a>


        <a href="/profile/MidnightCodeCup">
        MidnightCodeCup
        </a>
</li>
                    <li>        <img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/date_16x16.png"
            alt="Publication date" title="Publication date"
        />


        
        <span class="format-humantime" title="Mar/02/2026 15:30">3 weeks ago</span>
        
</li>
                    <li>        <a href="/blog/entry/151741#comments"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/comments_16x16.png"
            alt="Comments" title="Comments"
        /></a>


        <a href="/blog/entry/151741#comments">
        64
        </a>
</li>
            </ul>
        </div>

        <br style="clear:both;"/>
    </div>




<script type="text/javascript">
    $(document).ready(function () {
        let voteDirection = 0;

        function clickVote(direction) {
            if (direction === voteDirection) {
                direction = 0;
            }
            $.post("/data/topic/vote", {
                topicId: 152382,
                _tta: Codeforces.tta(),
                topicRevisionId: 424976,
                vote: direction,
            }, function (data) {
                if (data.success === "true") {
                    voteDirection = parseInt(data.voteDirection);
                    updateTopicVote(152382, voteDirection, data.processed === "true");
                }
                Codeforces.showMessage(data.message);
            }, "json");
        }

        $(".topic-vote-up-152382").click(function () {
            clickVote(+1);
            return false;
        });
        $(".topic-vote-down-152382").click(function () {
            clickVote(-1);
            return false;
        });
    });
</script></div>

</div>
<div style="margin-bottom:2em;">


<div class="has-topic-id topic" topicId="152726">
    <div class="title">
            <a href="/blog/entry/152085">            <p>Educational Codeforces Round 188 [Rated for Div. 2]</p>
</a>
    </div>

        <div class="info" style="position:relative;">
                By&nbsp;<a href="/profile/awoo" title="Grandmaster awoo" class="rated-user user-red">awoo</a>,
                    <a href="/topic/152726/en4">history</a>,
                    <span class="format-humantime" title="Mar/15/2026 16:36">8 days ago</span>,
                translation,
                <img style="position: relative;top: 5px;" src="//codeforces.com/codeforces.org/s/99808/images/flags/24/gb.png" alt="In English" title="In English"/>



            <div class="topic-actions smaller">
                <ul>


                </ul>
            </div>
        </div>

    <div class="content">
        <div class="ttypography"><p><img alt="Neapolis University Pafos" src="/predownloaded/9a/33/9a332fadbb47050ba9405057df022a6e37eaf5c0.png" style="float: right;height: 200.0px;margin: 10.0px;max-width: 100.0%;max-height: 100.0%;" /></p><p>Hello Codeforces!</p><p>The series of Educational Rounds continues thanks to the support of the <a href="https://lp.jetbrains.com/academy/csai-program/">Computer Science and Artificial Intelligence (CSAI)</a> program at <a href="https://www.nup.ac.cy/">Neapolis University Pafos</a>, with scholarships provided by JetBrains. </p><p><a href="/contest/2204" title="Educational Codeforces Round 188 (Rated for Div. 2)">Educational Codeforces Round 188 (Rated for Div. 2)</a> will start on <a class="contest-time" contestid="2204" href="https://www.timeanddate.com/worldclock/fixedtime.html?day=16&amp;month=3&amp;year=2026&amp;hour=17&amp;min=35&amp;sec=0&amp;p1=166"><span class="format-time-with-dow">Mar/16/2026 17:35 (Moscow time)</span></a>.</p><p>This round will be <strong>rated for the participants with rating lower than 2100</strong>. It will be held on extended ICPC rules. The penalty for each incorrect submission until the submission with a full solution is 10 minutes. After the end of the contest, you will have 12 hours to hack any solution you want. You will have access to copy any solution and test it locally.</p><p>You will be given <strong>6-7 problems</strong> and <strong>2 hours</strong> to solve them.</p><p>The problems were invented and prepared by Adilbek <a class="rated-user user-orange" href="/profile/adedalic" title="International Master adedalic">adedalic</a> Dalabaev, Ivan <a class="rated-user user-red" href="/profile/BledDest" title="International Grandmaster BledDest">BledDest</a> Androsov, Maksim <a class="rated-user user-violet" href="/profile/Neon" title="Candidate Master Neon">Neon</a> Mescheryakov, Roman <a class="rated-user user-orange" href="/profile/Roms" title="Master Roms">Roms</a> Glazov, Alex <a class="rated-user user-violet" href="/profile/fcspartakm" title="Candidate Master fcspartakm">fcspartakm</a> Frolov and me. Also, huge thanks to Mike <a class="rated-user user-admin" href="/profile/MikeMirzayanov" title="Headquarters, MikeMirzayanov">MikeMirzayanov</a> Mirzayanov for great systems Polygon and Codeforces.</p><p>Good luck to all the participants!</p><p>Our friends at Neapolis University Pafos also have a message for you:</p><p><strong>CSAI: First admission deadline approaches — April 28, 2026.</strong></p><p>Apply for the BSc in Computer Science &amp; Artificial Intelligence at the Neapolis University Pafos. Up to <strong><a href="https://lp.jetbrains.com/csai-program/how-to-apply/">40 full scholarships</a></strong>, provided by the <strong>JetBrains Foundation</strong>, are available this year.</p><h5><strong>Key Dates</strong></h5> <ul>   <li><strong>Application Deadline</strong>: April 28, 2026, 11:59 pm UTC</li>   <li><strong>Mandatory Entrance Test</strong>: May 3, 2026</li> </ul><h5><strong>A great opportunity: <a href="https://lp.jetbrains.com/academy/acts/2026.2/">ACTS 2026.2 Camp</a></strong></h5><p>To improve skills and prepare for intense programs like CSAI, we encourage applying for the <strong>ACTS 2026.2 Camp in Germany (July 10-20, 2026)</strong>.</p> <ul>   <li><strong>Tracks</strong>: Competitive Programming and Software Engineering.</li>   <li><strong>Registration Deadline</strong>: April 18th.</li> </ul><p>Ready to advance your coding journey? Join a leading computer science community today! Apply now and visit our dedicated pages for more details on how you can get involved.</p><p><strong>UPD:</strong> <a href="https://codeforces.com/blog/entry/152150">Editorial is out</a></p></div>

            <p class="topic-options">
                <a class="topic-read-more" href="/blog/entry/152085">Full text and comments »</a>
            </p>
    </div>


        <div style="font-size: 1.1rem;line-height: 1.1rem;padding-bottom: 0.5em;">
            <img src="//codeforces.com/codeforces.org/s/99808/images/icons/paperclip-16x16.png" style="vertical-align: middle;"/> <span style="padding: 0 0.35em;">Announcement of <a href="/contest/2204" class="notice" style="text-decoration: none;">Educational Codeforces Round 188 (Rated for Div. 2)</a> </span>
        </div>
        
            <script type="text/javascript">
    $(document).ready(function () {
        $(".delete-resource-link-42750-152726").click(function() {
            var that = this;
            Codeforces.confirm("Are you sure you want to detach a contest?", function () {
                $.post("/data/blogAndContest", {
                    action: "detachBlogFromContest",
                    blogId: "42750",
                    blogEntryId: "152085",
                    contestId: $(that).attr("data-contestId"),
                    resourceIds: $(that).attr("data-resourceIds")
                }, function(json) {        
                    Codeforces.reloadAndShowMessageOrShowError(json, "Contest detached");
                });
            }, function () {}, "Yes", "No");
        });
    });
</script>
        



    <div class="roundbox meta borderTopRound borderBottomRound" style="">
        <div class="left-meta">
            <ul>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-up-152726"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/voteup-gray.png"
            alt="Vote: I like it" title="Vote: I like it"
        /></a>


</li>
                    <li style="line-height: 1.6em;">

        
        <span class="topic-rating topic-rating-152726" title="Topic rating" data-topicId=152726 data-rawRating=-7 style='font-size:larger;position:relative;bottom:1px;font-weight:bold;color:gray'>-7</span>
        
</li>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-down-152726"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/votedown-gray.png"
            alt="Vote: I do not like it" title="Vote: I do not like it"
        /></a>


</li>
            </ul>
        </div>


            <span style="position: relative; line-height: 1.65em; top: 0.75rem; left: 0.8em;">
            </span>

        <div class="right-meta">
            <ul>
                    <li>        <a href="/profile/awoo"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/user_16x16.png"
            alt="Author" title="Author"
        /></a>


        <a href="/profile/awoo">
        awoo
        </a>
</li>
                    <li>        <img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/date_16x16.png"
            alt="Publication date" title="Publication date"
        />


        
        <span class="format-humantime" title="Mar/15/2026 16:36">8 days ago</span>
        
</li>
                    <li>        <a href="/blog/entry/152085#comments"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/comments_16x16.png"
            alt="Comments" title="Comments"
        /></a>


        <a href="/blog/entry/152085#comments">
        131
        </a>
</li>
            </ul>
        </div>

        <br style="clear:both;"/>
    </div>




<script type="text/javascript">
    $(document).ready(function () {
        let voteDirection = 0;

        function clickVote(direction) {
            if (direction === voteDirection) {
                direction = 0;
            }
            $.post("/data/topic/vote", {
                topicId: 152726,
                _tta: Codeforces.tta(),
                topicRevisionId: 426223,
                vote: direction,
            }, function (data) {
                if (data.success === "true") {
                    voteDirection = parseInt(data.voteDirection);
                    updateTopicVote(152726, voteDirection, data.processed === "true");
                }
                Codeforces.showMessage(data.message);
            }, "json");
        }

        $(".topic-vote-up-152726").click(function () {
            clickVote(+1);
            return false;
        });
        $(".topic-vote-down-152726").click(function () {
            clickVote(-1);
            return false;
        });
    });
</script></div>

</div>
<div style="margin-bottom:2em;">


<div class="has-topic-id topic" topicId="152562">
    <div class="title">
            <a href="/blog/entry/151921">            <p>Codeforces Round 1086 (Div. 2)</p>
</a>
    </div>

        <div class="info" style="position:relative;">
                By&nbsp;<a href="/profile/Mindeveloped" title="Grandmaster Mindeveloped" class="rated-user user-red">Mindeveloped</a>,
                    <a href="/topic/152562/en12">history</a>,
                    <span class="format-humantime" title="Mar/09/2026 14:22">2 weeks ago</span>,
                
                <img style="position: relative;top: 5px;" src="//codeforces.com/codeforces.org/s/99808/images/flags/24/gb.png" alt="In English" title="In English"/>



            <div class="topic-actions smaller">
                <ul>


                </ul>
            </div>
        </div>

    <div class="content">
        <div class="ttypography"><p>Hello, Codeforces!</p><p><a class="rated-user user-red" href="/profile/abc864197532" title="International Grandmaster abc864197532">abc864197532</a> and I are pleased to invite you to <a href="/contest/2208" title="Codeforces Round 1086 (Div. 2)">Codeforces Round 1086 (Div. 2)</a> on <a class="contest-time" contestid="2208" href="https://www.timeanddate.com/worldclock/fixedtime.html?day=14&amp;month=3&amp;year=2026&amp;hour=17&amp;min=35&amp;sec=0&amp;p1=166"><span class="format-time-with-dow">Mar/14/2026 17:35 (Moscow time)</span></a>! </p><p>You will be given $$$5$$$ problems to solve in $$$2$$$ hours. Some of these problems are divided into subtasks. The scoring distribution is $$$500-1000-1250-(1250+1250)-3000$$$.</p><p>The problems of this round were prepared by <a class="rated-user user-blue" href="/profile/tybbs" title="Expert tybbs">tybbs</a>, <a class="rated-user user-violet" href="/profile/Mini_PEKKA" title="Candidate Master Mini_PEKKA">Mini_PEKKA</a> and me. We would like to thank the following people for making this round possible.</p> <ul>   <li><a class="rated-user user-red" href="/profile/abc864197532" title="International Grandmaster abc864197532">abc864197532</a> for his wonderful coordination.</li>   <li><a class="rated-user user-orange" href="/profile/Alexdat2000" title="Master Alexdat2000">Alexdat2000</a> for Russian translation.</li>   <li><a class="rated-user user-red" href="/profile/__baozii__" title="International Grandmaster __baozii__">__baozii__</a>, <a class="rated-user user-red" href="/profile/_istil" title="Grandmaster _istil">_istil</a>, <a class="rated-user user-red" href="/profile/ETO_leader" title="Grandmaster ETO_leader">ETO_leader</a>, <a class="rated-user user-red" href="/profile/Fysty" title="International Grandmaster Fysty">Fysty</a>, <a class="rated-user user-red" href="/profile/WiwiHo" title="International Grandmaster WiwiHo">WiwiHo</a>, <a class="rated-user user-red" href="/profile/amano_hina" title="Grandmaster amano_hina">amano_hina</a>, <a class="rated-user user-red" href="/profile/baluteshih" title="Grandmaster baluteshih">baluteshih</a> and <a class="rated-user user-red" href="/profile/max0810" title="International Grandmaster max0810">max0810</a> for red testing.</li>   <li><a class="rated-user user-orange" href="/profile/Friedrich" title="Master Friedrich">Friedrich</a>, <a class="rated-user user-orange" href="/profile/Halberd_Cease" title="Master Halberd_Cease">Halberd_Cease</a> and <a class="rated-user user-orange" href="/profile/guagua0407" title="Master guagua0407">guagua0407</a> for orange testing.</li>   <li><a class="rated-user user-violet" href="/profile/CSQ31" title="Candidate Master CSQ31">CSQ31</a>, <a class="rated-user user-violet" href="/profile/Maskrio" title="Candidate Master Maskrio">Maskrio</a>, <a class="rated-user user-violet" href="/profile/Murinho" title="Candidate Master Murinho">Murinho</a>, <a class="rated-user user-violet" href="/profile/Neil_Qian" title="Candidate Master Neil_Qian">Neil_Qian</a> and <a class="rated-user user-violet" href="/profile/raresh30" title="Candidate Master raresh30">raresh30</a> for purple testing.</li>   <li><a class="rated-user user-blue" href="/profile/daniel071292" title="Expert daniel071292">daniel071292</a>, <a class="rated-user user-blue" href="/profile/lev1106" title="Expert lev1106">lev1106</a> and <a class="rated-user user-blue" href="/profile/the_dragon_emperor" title="Expert the_dragon_emperor">the_dragon_emperor</a> for blue testing.</li>   <li><a class="rated-user user-black" href="/profile/afoasdfashdoif" title="Unrated, afoasdfashdoif">afoasdfashdoif</a> for black testing.</li>   <li><a class="rated-user user-admin" href="/profile/MikeMirzayanov" title="Headquarters, MikeMirzayanov">MikeMirzayanov</a> and <a class="rated-user user-legendary" href="/profile/KAN" title="Legendary Grandmaster KAN"><span class="legendary-user-first-letter">K</span>AN</a> for the brilliant Codeforces and Polygon platform.</li>   <li>You, for participating.</li> </ul><p>Good luck &amp; Have fun!</p><p>UPD: The <a href="https://codeforces.com/blog/entry/152073">editorial</a> has been published. Congratulations to the winners!</p><p>Div .1 and Div. 2:</p> <ol>   <li><a class="rated-user user-legendary" href="/profile/ksun48" title="Legendary Grandmaster ksun48"><span class="legendary-user-first-letter">k</span>sun48</a></li>   <li><a class="rated-user user-legendary" href="/profile/Nachia" title="Legendary Grandmaster Nachia"><span class="legendary-user-first-letter">N</span>achia</a></li>   <li><a class="rated-user user-red" href="/profile/A_G" title="International Grandmaster A_G">A_G</a></li>   <li><a class="rated-user user-red" href="/profile/YuukiS" title="Grandmaster YuukiS">YuukiS</a></li>   <li><a class="rated-user user-red" href="/profile/ttamx" title="Grandmaster ttamx">ttamx</a></li>   <li><a class="rated-user user-legendary" href="/profile/BurnedChicken" title="Legendary Grandmaster BurnedChicken"><span class="legendary-user-first-letter">B</span>urnedChicken</a></li>   <li><a class="rated-user user-legendary" href="/profile/StarSilk" title="Legendary Grandmaster StarSilk"><span class="legendary-user-first-letter">S</span>tarSilk</a></li>   <li><a class="rated-user user-red" href="/profile/244mhq" title="International Grandmaster 244mhq">244mhq</a></li>   <li><a class="rated-user user-red" href="/profile/kotatsugame" title="International Grandmaster kotatsugame">kotatsugame</a></li>   <li><a class="rated-user user-red" href="/profile/415411" title="International Grandmaster 415411">415411</a></li> </ol><p>Div. 2 Only:</p> <ol>   <li><a class="rated-user user-violet" href="/profile/debangsu_" title="Candidate Master debangsu_">debangsu_</a></li>   <li><a class="rated-user user-violet" href="/profile/masy2011" title="Candidate Master masy2011">masy2011</a></li>   <li><a class="rated-user user-orange" href="/profile/vlp" title="Master vlp">vlp</a></li>   <li><a class="rated-user user-violet" href="/profile/Conqueror5" title="Candidate Master Conqueror5">Conqueror5</a></li>   <li><a class="rated-user user-violet" href="/profile/lzh999" title="Candidate Master lzh999">lzh999</a></li>   <li><a class="rated-user user-blue" href="/profile/alex.krivoschecov" title="Expert alex.krivoschecov">alex.krivoschecov</a></li>   <li><a class="rated-user user-orange" href="/profile/vld.ktk" title="Master vld.ktk">vld.ktk</a></li>   <li><a class="rated-user user-violet" href="/profile/ExtraNumber" title="Candidate Master ExtraNumber">ExtraNumber</a></li>   <li><a class="rated-user user-violet" href="/profile/XorGhost" title="Candidate Master XorGhost">XorGhost</a></li>   <li><a class="rated-user user-blue" href="/profile/11Gaurav1" title="Expert 11Gaurav1">11Gaurav1</a></li> </ol></div>

            <p class="topic-options">
                <a class="topic-read-more" href="/blog/entry/151921">Full text and comments »</a>
            </p>
    </div>


        <div style="font-size: 1.1rem;line-height: 1.1rem;padding-bottom: 0.5em;">
            <img src="//codeforces.com/codeforces.org/s/99808/images/icons/paperclip-16x16.png" style="vertical-align: middle;"/> <span style="padding: 0 0.35em;">Announcement of <a href="/contest/2208" class="notice" style="text-decoration: none;">Codeforces Round 1086 (Div. 2)</a> </span>
        </div>
        
            <script type="text/javascript">
    $(document).ready(function () {
        $(".delete-resource-link-292555-152562").click(function() {
            var that = this;
            Codeforces.confirm("Are you sure you want to detach a contest?", function () {
                $.post("/data/blogAndContest", {
                    action: "detachBlogFromContest",
                    blogId: "292555",
                    blogEntryId: "151921",
                    contestId: $(that).attr("data-contestId"),
                    resourceIds: $(that).attr("data-resourceIds")
                }, function(json) {        
                    Codeforces.reloadAndShowMessageOrShowError(json, "Contest detached");
                });
            }, function () {}, "Yes", "No");
        });
    });
</script>
        



    <div class="roundbox meta borderTopRound borderBottomRound" style="">
        <div class="left-meta">
            <ul>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-up-152562"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/voteup-gray.png"
            alt="Vote: I like it" title="Vote: I like it"
        /></a>


</li>
                    <li style="line-height: 1.6em;">

        
        <span class="topic-rating topic-rating-152562" title="Topic rating" data-topicId=152562 data-rawRating=273 style='font-size:larger;position:relative;bottom:1px;font-weight:bold;color:green'>+273</span>
        
</li>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-down-152562"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/votedown-gray.png"
            alt="Vote: I do not like it" title="Vote: I do not like it"
        /></a>


</li>
            </ul>
        </div>


            <span style="position: relative; line-height: 1.65em; top: 0.75rem; left: 0.8em;">
            </span>

        <div class="right-meta">
            <ul>
                    <li>        <a href="/profile/Mindeveloped"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/user_16x16.png"
            alt="Author" title="Author"
        /></a>


        <a href="/profile/Mindeveloped">
        Mindeveloped
        </a>
</li>
                    <li>        <img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/date_16x16.png"
            alt="Publication date" title="Publication date"
        />


        
        <span class="format-humantime" title="Mar/09/2026 14:22">2 weeks ago</span>
        
</li>
                    <li>        <a href="/blog/entry/151921#comments"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/comments_16x16.png"
            alt="Comments" title="Comments"
        /></a>


        <a href="/blog/entry/151921#comments">
        123
        </a>
</li>
            </ul>
        </div>

        <br style="clear:both;"/>
    </div>




<script type="text/javascript">
    $(document).ready(function () {
        let voteDirection = 0;

        function clickVote(direction) {
            if (direction === voteDirection) {
                direction = 0;
            }
            $.post("/data/topic/vote", {
                topicId: 152562,
                _tta: Codeforces.tta(),
                topicRevisionId: 425934,
                vote: direction,
            }, function (data) {
                if (data.success === "true") {
                    voteDirection = parseInt(data.voteDirection);
                    updateTopicVote(152562, voteDirection, data.processed === "true");
                }
                Codeforces.showMessage(data.message);
            }, "json");
        }

        $(".topic-vote-up-152562").click(function () {
            clickVote(+1);
            return false;
        });
        $(".topic-vote-down-152562").click(function () {
            clickVote(-1);
            return false;
        });
    });
</script></div>

</div>
<div style="margin-bottom:2em;">


<div class="has-topic-id topic" topicId="152633">
    <div class="title">
            <a href="/blog/entry/151992">            <p>Kotlin Heroes: Episode 14 Results</p>
</a>
    </div>

        <div class="info" style="position:relative;">
                By&nbsp;<a href="/profile/JetBrains" title="Unrated, JetBrains" class="rated-user user-black">JetBrains</a>,
                    <a href="/topic/152633/en4">history</a>,
                    <span class="format-humantime" title="Mar/11/2026 17:55">12 days ago</span>,
                
                <img style="position: relative;top: 5px;" src="//codeforces.com/codeforces.org/s/99808/images/flags/24/gb.png" alt="In English" title="In English"/>



            <div class="topic-actions smaller">
                <ul>


                </ul>
            </div>
        </div>

    <div class="content">
        <div class="ttypography"><p>Hello Codeforces!</p><p><a href="/contest/2199" title="Kotlin Heroes: Episode 14">Kotlin Heroes: Episode 14</a> has wrapped up, and what an exciting round it was! Thanks to everyone who joined the contest, solved problems, and made this round another great Kotlin Heroes event.</p><p>We’ve already had many amazing rounds of the Kotlin Heroes series, and it’s incredible to see the community grow with each episode. Once again, we are proud to celebrate the true heroes of Kotlin who rose to the top and earned well-deserved prizes.</p><p>Top 3 contestants are:</p> <ol>   <li><a class="rated-user user-red" href="/profile/Golovanov399" title="International Grandmaster Golovanov399">Golovanov399</a></li>   <li><a class="rated-user user-red" href="/profile/BucketPotato" title="Grandmaster BucketPotato">BucketPotato</a></li>   <li><a class="rated-user user-red" href="/profile/literalchild" title="International Grandmaster literalchild">literalchild</a></li> </ol><p>Kotlin Heroes T-shirts will go to the top 50 contestants:</p> <div class="spoiler"><b class="spoiler-title">list of the winners</b><div class="spoiler-content" style="display: none;"><ol>   <li><a class="rated-user user-red" href="/profile/Golovanov399" title="International Grandmaster Golovanov399">Golovanov399</a></li>   <li><a class="rated-user user-red" href="/profile/BucketPotato" title="Grandmaster BucketPotato">BucketPotato</a></li>   <li><a class="rated-user user-red" href="/profile/literalchild" title="International Grandmaster literalchild">literalchild</a></li>   <li><a class="rated-user user-red" href="/profile/__baozii__" title="International Grandmaster __baozii__">__baozii__</a></li>   <li><a class="rated-user user-red" href="/profile/Sugar_fan" title="International Grandmaster Sugar_fan">Sugar_fan</a></li>   <li><a class="rated-user user-legendary" href="/profile/arvindf232" title="Legendary Grandmaster arvindf232"><span class="legendary-user-first-letter">a</span>rvindf232</a></li>   <li><a class="rated-user user-legendary" href="/profile/potato167" title="Legendary Grandmaster potato167"><span class="legendary-user-first-letter">p</span>otato167</a></li>   <li><a class="rated-user user-red" href="/profile/Fysty" title="International Grandmaster Fysty">Fysty</a></li>   <li><a class="rated-user user-red" href="/profile/ttamx" title="Grandmaster ttamx">ttamx</a></li>   <li><a class="rated-user user-red" href="/profile/maomao90" title="Grandmaster maomao90">maomao90</a></li>   <li><a class="rated-user user-orange" href="/profile/MagnusCarlsen321" title="Master MagnusCarlsen321">MagnusCarlsen321</a></li>   <li><a class="rated-user user-orange" href="/profile/yanb0" title="Master yanb0">yanb0</a></li>   <li><a class="rated-user user-orange" href="/profile/Kieray" title="International Master Kieray">Kieray</a></li>   <li><a class="rated-user user-blue" href="/profile/zoryn" title="Expert zoryn">zoryn</a></li>   <li><a class="rated-user user-red" href="/profile/Tlatoani" title="International Grandmaster Tlatoani">Tlatoani</a></li>   <li><a class="rated-user user-red" href="/profile/Sulfox" title="International Grandmaster Sulfox">Sulfox</a></li>   <li><a class="rated-user user-orange" href="/profile/daukhoi" title="Master daukhoi">daukhoi</a></li>   <li><a class="rated-user user-red" href="/profile/darnley" title="Grandmaster darnley">darnley</a></li>   <li><a class="rated-user user-orange" href="/profile/__jk__" title="Master __jk__">__jk__</a></li>   <li><a class="rated-user user-red" href="/profile/tabr" title="Grandmaster tabr">tabr</a></li>   <li><a class="rated-user user-blue" href="/profile/wuyuetong" title="Expert wuyuetong">wuyuetong</a></li>   <li><a class="rated-user user-red" href="/profile/turkhuu622" title="Grandmaster turkhuu622">turkhuu622</a></li>   <li><a class="rated-user user-orange" href="/profile/longago_06" title="Master longago_06">longago_06</a></li>   <li><a class="rated-user user-violet" href="/profile/sahasrad" title="Candidate Master sahasrad">sahasrad</a></li>   <li><a class="rated-user user-orange" href="/profile/CirnoNine" title="Master CirnoNine">CirnoNine</a></li>   <li><a class="rated-user user-orange" href="/profile/binminh" title="Master binminh">binminh</a></li>   <li><a class="rated-user user-orange" href="/profile/ItsNotMeItsYou" title="Master ItsNotMeItsYou">ItsNotMeItsYou</a></li>   <li><a class="rated-user user-red" href="/profile/Kude" title="Grandmaster Kude">Kude</a></li>   <li><a class="rated-user user-red" href="/profile/uwi" title="International Grandmaster uwi">uwi</a></li>   <li><a class="rated-user user-orange" href="/profile/shade34" title="Master shade34">shade34</a></li>   <li><a class="rated-user user-orange" href="/profile/yudedako" title="Master yudedako">yudedako</a></li>   <li><a class="rated-user user-red" href="/profile/Darren0724" title="Grandmaster Darren0724">Darren0724</a></li>   <li><a class="rated-user user-orange" href="/profile/conjectureguy" title="Master conjectureguy">conjectureguy</a></li>   <li><a class="rated-user user-violet" href="/profile/gleb.astashkin" title="Candidate Master gleb.astashkin">gleb.astashkin</a></li>   <li><a class="rated-user user-blue" href="/profile/ankitkumar1234__" title="Expert ankitkumar1234__">ankitkumar1234__</a></li>   <li><a class="rated-user user-orange" href="/profile/jtrh" title="Master jtrh">jtrh</a></li>   <li><a class="rated-user user-orange" href="/profile/Nikrien" title="Master Nikrien">Nikrien</a></li>   <li><a class="rated-user user-red" href="/profile/p0tato" title="International Grandmaster p0tato">p0tato</a></li>   <li><a class="rated-user user-blue" href="/profile/khba" title="Expert khba">khba</a></li>   <li><a class="rated-user user-orange" href="/profile/irmuun" title="Master irmuun">irmuun</a></li>   <li><a class="rated-user user-red" href="/profile/Egor" title="International Grandmaster Egor">Egor</a></li>   <li><a class="rated-user user-orange" href="/profile/tokitsukaze" title="Master tokitsukaze">tokitsukaze</a></li>   <li><a class="rated-user user-orange" href="/profile/MvKaio" title="Master MvKaio">MvKaio</a></li>   <li><a class="rated-user user-violet" href="/profile/ajinkya1p3" title="Candidate Master ajinkya1p3">ajinkya1p3</a></li>   <li><a class="rated-user user-orange" href="/profile/wu_qing" title="Master wu_qing">wu_qing</a></li>   <li><a class="rated-user user-red" href="/profile/kolorVXL" title="Grandmaster kolorVXL">kolorVXL</a></li>   <li><a class="rated-user user-orange" href="/profile/ali2005_syr" title="Master ali2005_syr">ali2005_syr</a></li>   <li><a class="rated-user user-orange" href="/profile/emthrm" title="Master emthrm">emthrm</a></li>   <li><a class="rated-user user-orange" href="/profile/hitman_py" title="Master hitman_py">hitman_py</a></li>   <li><a class="rated-user user-blue" href="/profile/E49869826" title="Expert E49869826">E49869826</a></li> </ol></div></div><p>These participants, who solved at least one problem, were randomly selected to receive special Kotlin Heroes T-shirts:</p> <div class="spoiler"><b class="spoiler-title">list of the winners</b><div class="spoiler-content" style="display: none;"><ol>   <li><a class="rated-user user-violet" href="/profile/ma_moutahid" title="Candidate Master ma_moutahid">ma_moutahid</a></li>   <li><a class="rated-user user-blue" href="/profile/wublabdubdub" title="Expert wublabdubdub">wublabdubdub</a></li>   <li><a class="rated-user user-cyan" href="/profile/kala_koder" title="Specialist kala_koder">kala_koder</a></li>   <li><a class="rated-user user-cyan" href="/profile/ked4ma" title="Specialist ked4ma">ked4ma</a></li>   <li><a class="rated-user user-blue" href="/profile/tranlehieu" title="Expert tranlehieu">tranlehieu</a></li>   <li><a class="rated-user user-blue" href="/profile/lukeboo" title="Expert lukeboo">lukeboo</a></li>   <li><a class="rated-user user-green" href="/profile/tanish1908" title="Pupil tanish1908">tanish1908</a></li>   <li><a class="rated-user user-gray" href="/profile/Camilo649" title="Newbie Camilo649">Camilo649</a></li>   <li><a class="rated-user user-green" href="/profile/qvox177" title="Pupil qvox177">qvox177</a></li>   <li><a class="rated-user user-green" href="/profile/maddalasreekar" title="Pupil maddalasreekar">maddalasreekar</a></li>   <li><a class="rated-user user-cyan" href="/profile/anirudh_08" title="Specialist anirudh_08">anirudh_08</a></li>   <li><a class="rated-user user-blue" href="/profile/brawlera4" title="Expert brawlera4">brawlera4</a></li>   <li><a class="rated-user user-gray" href="/profile/sanjay_siva" title="Newbie sanjay_siva">sanjay_siva</a></li>   <li><a class="rated-user user-gray" href="/profile/zeyedmahrez" title="Newbie zeyedmahrez">zeyedmahrez</a></li>   <li><a class="rated-user user-gray" href="/profile/NADIDADIT" title="Newbie NADIDADIT">NADIDADIT</a></li>   <li><a class="rated-user user-gray" href="/profile/Shri_Harshini" title="Newbie Shri_Harshini">Shri_Harshini</a></li>   <li><a class="rated-user user-blue" href="/profile/ps2181" title="Expert ps2181">ps2181</a></li>   <li><a class="rated-user user-gray" href="/profile/bilolxon866" title="Newbie bilolxon866">bilolxon866</a></li>   <li><a class="rated-user user-green" href="/profile/sparadigm" title="Pupil sparadigm">sparadigm</a></li>   <li><a class="rated-user user-gray" href="/profile/1sh_02" title="Newbie 1sh_02">1sh_02</a></li>   <li><a class="rated-user user-red" href="/profile/xiaowuc1" title="Grandmaster xiaowuc1">xiaowuc1</a></li>   <li><a class="rated-user user-green" href="/profile/ShvetsovMakar" title="Pupil ShvetsovMakar">ShvetsovMakar</a></li>   <li><a class="rated-user user-green" href="/profile/pkpawan" title="Pupil pkpawan">pkpawan</a></li>   <li><a class="rated-user user-green" href="/profile/Utkarsh_Pandey007" title="Pupil Utkarsh_Pandey007">Utkarsh_Pandey007</a></li>   <li><a class="rated-user user-gray" href="/profile/klu2300031222" title="Newbie klu2300031222">klu2300031222</a></li>   <li><a class="rated-user user-gray" href="/profile/coder_manish" title="Newbie coder_manish">coder_manish</a></li>   <li><a class="rated-user user-gray" href="/profile/yashwanth_111" title="Newbie yashwanth_111">yashwanth_111</a></li>   <li><a class="rated-user user-gray" href="/profile/SecondDawn" title="Newbie SecondDawn">SecondDawn</a></li>   <li><a class="rated-user user-gray" href="/profile/Devil109" title="Newbie Devil109">Devil109</a></li>   <li><a class="rated-user user-blue" href="/profile/ANOnymou5" title="Expert ANOnymou5">ANOnymou5</a></li>   <li><a class="rated-user user-gray" href="/profile/spherical" title="Newbie spherical">spherical</a></li>   <li><a class="rated-user user-green" href="/profile/Run" title="Pupil Run">Run</a></li>   <li><a class="rated-user user-blue" href="/profile/BanMeFromProcrastination" title="Expert BanMeFromProcrastination">BanMeFromProcrastination</a></li>   <li><a class="rated-user user-blue" href="/profile/nba_yeabsira" title="Expert nba_yeabsira">nba_yeabsira</a></li>   <li><a class="rated-user user-gray" href="/profile/SahilBarve100" title="Newbie SahilBarve100">SahilBarve100</a></li>   <li><a class="rated-user user-cyan" href="/profile/goalboy" title="Specialist goalboy">goalboy</a></li>   <li><a class="rated-user user-gray" href="/profile/klu2300030298" title="Newbie klu2300030298">klu2300030298</a></li>   <li><a class="rated-user user-blue" href="/profile/anirudhbanda" title="Expert anirudhbanda">anirudhbanda</a></li>   <li><a class="rated-user user-blue" href="/profile/Istahak16" title="Expert Istahak16">Istahak16</a></li>   <li><a class="rated-user user-gray" href="/profile/DakshSharma2001" title="Newbie DakshSharma2001">DakshSharma2001</a></li>   <li><a class="rated-user user-blue" href="/profile/eulerscheZahl" title="Expert eulerscheZahl">eulerscheZahl</a></li>   <li><a class="rated-user user-violet" href="/profile/Alish_1_2100" title="Candidate Master Alish_1_2100">Alish_1_2100</a></li>   <li><a class="rated-user user-gray" href="/profile/everest301" title="Newbie everest301">everest301</a></li>   <li><a class="rated-user user-gray" href="/profile/Pavani33843" title="Newbie Pavani33843">Pavani33843</a></li>   <li><a class="rated-user user-cyan" href="/profile/anonymous_ali" title="Specialist anonymous_ali">anonymous_ali</a></li>   <li><a class="rated-user user-gray" href="/profile/SakibSibly" title="Newbie SakibSibly">SakibSibly</a></li>   <li><a class="rated-user user-orange" href="/profile/vali" title="Master vali">vali</a></li>   <li><a class="rated-user user-gray" href="/profile/Mustakin_fm" title="Newbie Mustakin_fm">Mustakin_fm</a></li>   <li><a class="rated-user user-violet" href="/profile/int23_t" title="Candidate Master int23_t">int23_t</a></li>   <li><a class="rated-user user-gray" href="/profile/aa122ws2" title="Newbie aa122ws2">aa122ws2</a></li> </ol></div></div><p>We’ll be in touch soon to coordinate prize delivery. Some participants from the previous round are still waiting for their Kotlin Heroes T-shirts due to shipping delays. We are working to resolve this and will make sure everyone receives their prizes. Thank you so much for your patience!</p><p>It's great to see new people learning Kotlin and performing brilliantly in the competition. Want to keep practicing? Challenges from all 14 previous rounds are available here:  <a href="https://codeforces.com/contests/1170,1171">Episode 1</a>, <a href="https://codeforces.com/contests/1211,1212">Episode 2</a>, <a href="https://codeforces.com/contests/1297,1298">Episode 3</a>, <a href="https://codeforces.com/contests/1346,1347">Episode 4</a>, <a href="https://codeforces.com/contests/1432,1431">Episode 5: ICPC Round</a>, <a href="https://codeforces.com/contests/1488,1489">Episode 6</a>, <a href="https://codeforces.com/contests/1533,1532">Episode 7</a>, <a href="https://codeforces.com/contests/1571,1570">Episode 8</a>, <a href="https://codeforces.com/contests/1911,1910">Episode 9</a>, <a href="https://codeforces.com/contests/1959,1958">Episode 10</a>, <a href="https://codeforces.com/contests/2011,2012">Episode 11</a>, <a href="https://codeforces.com/contests/2087,2088">Episode 12</a>, <a href="https://codeforces.com/contests/2141,2142">Episode 13</a> and <a href="https://codeforces.com/contests/2199,2198">Episode 14</a>.</p><p>If you’d like to sharpen your Kotlin skills, start with: </p> <ul>   <li><a href="https://kotlinlang.org/docs/getting-started.html">Tour of Kotlin</a> to learn the basics</li>   <li><a href="https://plugins.jetbrains.com/plugin/22214-algorithmic-challenges-in-kotlin">Algorithmic Challenges in Kotlin</a> course, created by some of the competitive programming champions</li>   <li><a href="https://kotlinlang.org/docs/competitive-programming.html">Competitive programming tutorial</a></li>   <li><a href="https://www.youtube.com/playlist?list=PLlFc5cFwUnmyQA0l15nAfE1-pnu6fSvvG">Videos on competitive programming in Kotlin</a> from top competitive programmers</li> </ul><p>Stay tuned for future rounds, and we hope to see you again in the next Kotlin Heroes contest!</p></div>

            <p class="topic-options">
                <a class="topic-read-more" href="/blog/entry/151992">Full text and comments »</a>
            </p>
    </div>


        
            <script type="text/javascript">
    $(document).ready(function () {
        $(".delete-resource-link-134845-152633").click(function() {
            var that = this;
            Codeforces.confirm("Are you sure you want to detach a contest?", function () {
                $.post("/data/blogAndContest", {
                    action: "detachBlogFromContest",
                    blogId: "134845",
                    blogEntryId: "151992",
                    contestId: $(that).attr("data-contestId"),
                    resourceIds: $(that).attr("data-resourceIds")
                }, function(json) {        
                    Codeforces.reloadAndShowMessageOrShowError(json, "Contest detached");
                });
            }, function () {}, "Yes", "No");
        });
    });
</script>
        

        <div style="font-size: 1.1rem;line-height: 11px;">
            <img style="vertical-align: middle;" src="//codeforces.com/codeforces.org/s/99808/images/blog/tags.png" title="Tags" alt="Tags"/>
                <span style="padding: 0 0.35em;">
    <a href="/search?query=kotlin+heroes" class="tag notice" style="text-decoration: none;">kotlin heroes</a>,
                </span>
                <span style="padding: 0 0.35em;">
    <a href="/search?query=kotlin" class="tag notice" style="text-decoration: none;">kotlin</a>,
                </span>
                <span style="padding: 0 0.35em;">
    <a href="/search?query=kotlinheroes" class="tag notice" style="text-decoration: none;">kotlinheroes</a>
                </span>
        </div>


    <div class="roundbox meta borderTopRound borderBottomRound" style="">
        <div class="left-meta">
            <ul>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-up-152633"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/voteup-gray.png"
            alt="Vote: I like it" title="Vote: I like it"
        /></a>


</li>
                    <li style="line-height: 1.6em;">

        
        <span class="topic-rating topic-rating-152633" title="Topic rating" data-topicId=152633 data-rawRating=113 style='font-size:larger;position:relative;bottom:1px;font-weight:bold;color:green'>+113</span>
        
</li>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-down-152633"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/votedown-gray.png"
            alt="Vote: I do not like it" title="Vote: I do not like it"
        /></a>


</li>
            </ul>
        </div>


            <span style="position: relative; line-height: 1.65em; top: 0.75rem; left: 0.8em;">
            </span>

        <div class="right-meta">
            <ul>
                    <li>        <a href="/profile/JetBrains"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/user_16x16.png"
            alt="Author" title="Author"
        /></a>


        <a href="/profile/JetBrains">
        JetBrains
        </a>
</li>
                    <li>        <img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/date_16x16.png"
            alt="Publication date" title="Publication date"
        />


        
        <span class="format-humantime" title="Mar/11/2026 17:55">12 days ago</span>
        
</li>
                    <li>        <a href="/blog/entry/151992#comments"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/comments_16x16.png"
            alt="Comments" title="Comments"
        /></a>


        <a href="/blog/entry/151992#comments">
        13
        </a>
</li>
            </ul>
        </div>

        <br style="clear:both;"/>
    </div>




<script type="text/javascript">
    $(document).ready(function () {
        let voteDirection = 0;

        function clickVote(direction) {
            if (direction === voteDirection) {
                direction = 0;
            }
            $.post("/data/topic/vote", {
                topicId: 152633,
                _tta: Codeforces.tta(),
                topicRevisionId: 426144,
                vote: direction,
            }, function (data) {
                if (data.success === "true") {
                    voteDirection = parseInt(data.voteDirection);
                    updateTopicVote(152633, voteDirection, data.processed === "true");
                }
                Codeforces.showMessage(data.message);
            }, "json");
        }

        $(".topic-vote-up-152633").click(function () {
            clickVote(+1);
            return false;
        });
        $(".topic-vote-down-152633").click(function () {
            clickVote(-1);
            return false;
        });
    });
</script></div>

</div>
<div style="margin-bottom:2em;">


<div class="has-topic-id topic" topicId="152460">
    <div class="title">
            <a href="/blog/entry/151819">            <p>Codeforces Round 1085 (Div. 1 + Div. 2)</p>
</a>
    </div>

        <div class="info" style="position:relative;">
                By&nbsp;<a href="/profile/awang11" title="International Master awang11" class="rated-user user-orange">awang11</a>,
                    <a href="/topic/152460/en23">history</a>,
                    <span class="format-humantime" title="Mar/04/2026 18:54">3 weeks ago</span>,
                
                <img style="position: relative;top: 5px;" src="//codeforces.com/codeforces.org/s/99808/images/flags/24/gb.png" alt="In English" title="In English"/>



            <div class="topic-actions smaller">
                <ul>


                </ul>
            </div>
        </div>

    <div class="content">
        <div class="ttypography"><center> <table class="tex-tabular" style="border-left: none;border-right: none;border-top: 1.0px solid;border-bottom: 1.0px solid;border-collapse: collapse;">   <tbody>     <tr>       <td class="tex-tabular-text-align-center" style="border-left: none;border-right: none;border-top: none;border-bottom: none;">         <span class="tex-font-size-small">           <span class="tex-font-style-it">             <a href="https://www.youtube.com/watch?v=1bvDHAUv2ak">Gusty Garden Galaxy — Mahito Yokota, Super Mario Galaxy</a>           </span>         </span>       </td>     </tr>   </tbody> </table> </center> <p style="text-align: center;"> <img src="/predownloaded/9f/72/9f722a2e91e0a8a38ca368e42ef6469712b196bc.png" style="max-width: 100.0%;max-height: 100.0%;" width="50%" /> </p><p>Hello, Codeforces!</p><p><a class="rated-user user-blue" href="/profile/IceSerpent" title="Expert IceSerpent">IceSerpent</a> and I are pleased to invite you to <a href="/contest/2207">Codeforces Round 1085 (Div. 1 + Div. 2)</a> on <a class="contest-time" contestid="2207" href="https://www.timeanddate.com/worldclock/fixedtime.html?day=8&amp;month=3&amp;year=2026&amp;hour=17&amp;min=35&amp;sec=0&amp;p1=166"><span class="format-time-with-dow">Mar/08/2026 17:35 (Moscow time)</span></a>! While some of us will be turning our clocks an hour forward for daylight savings, our theme will turn it way back to the <strong>2010s</strong>. </p><p>You will be given $$$8$$$ problems to solve in $$$3$$$ hours. Note that some of these problems are further divided into subtasks. Some of the problems may be interactive, so please read the <a href="https://codeforces.com/blog/entry/45307">guide for interactive problems</a> if you are not familiar with them. The scoring distribution is as follows:</p> <p style="text-align: center;">$$$\ \ \ \,$$$ <img src="/predownloaded/10/06/10061397c60c77098fd28b0fa0d246ed7df86e5e.png" style="max-width: 100.0%;max-height: 100.0%;" width="5%" />$$$\ $$$ <img src="/predownloaded/40/fc/40fc1a5591e005935d8f74e94f219a80527062ba.png" style="max-width: 100.0%;max-height: 100.0%;" width="5%" />$$$\ \,$$$ <img src="/predownloaded/a8/43/a8436108f91a00313f8fb5ac4908c9540f7a5081.png" style="max-width: 100.0%;max-height: 100.0%;" width="5%" />$$$\,$$$ <img src="/predownloaded/8d/59/8d592bef953eaf66c6371fcbeb404feadf7d68bf.png" style="max-width: 100.0%;max-height: 100.0%;" width="6%" />$$$\quad\ \ \ \ \,$$$ <img src="/predownloaded/4e/a4/4ea4e6432273835877eab76af28bebec4ca7a808.png" style="max-width: 100.0%;max-height: 100.0%;" width="5%" />$$$\quad\ \ \ \ \ \,$$$ <img src="/predownloaded/b4/4d/b44d72d44fd28408e6b885d3c045e2992d39acc2.png" style="max-width: 100.0%;max-height: 100.0%;" width="5%" />$$$\ \ $$$ <img src="/predownloaded/5a/74/5a74c232f56d60f74fb87e43e702df6359401018.png" style="max-width: 100.0%;max-height: 100.0%;" width="5%" />$$$\qquad\ \ \ \ \ \ \ \,$$$ <img src="/predownloaded/d9/54/d954f65446010f85e53873aaf50440c308726884.png" style="max-width: 100.0%;max-height: 100.0%;" width="5%" />$$$\qquad\quad\ \ \ \ \ \ \ \ $$$</p> <center>$$$750 - 1250 - 1500 - 2250 - (1750 + 1000) - 3250 - 3750 - (3250 + 1000 + 1500)$$$</center><p>The problems of this round were authored by <a class="rated-user user-blue" href="/profile/IceSerpent" title="Expert IceSerpent">IceSerpent</a> and myself, <a class="rated-user user-orange" href="/profile/awang11" title="International Master awang11">awang11</a>. In addition, we would like to thank:</p> <ul>   <li><p><a class="rated-user user-red" href="/profile/244mhq" title="International Grandmaster 244mhq">244mhq</a> for his excellent coordination of the round and translating the problems to Russian;</p></li>   <li><p><a class="rated-user user-legendary" href="/profile/Um_nik" title="Legendary Grandmaster Um_nik"><span class="legendary-user-first-letter">U</span>m_nik</a> for pre-reviewing the round;</p></li>   <li><p><a class="rated-user user-black" href="/profile/flummoxedfeline" title="Unrated, flummoxedfeline">flummoxedfeline</a> for providing beautiful illustrations;</p></li>   <li><p>our army of testers, for their invaluable feedback and eagerness to testsolve: <a class="rated-user user-legendary" href="/profile/Um_nik" title="Legendary Grandmaster Um_nik"><span class="legendary-user-first-letter">U</span>m_nik</a>, <a class="rated-user user-violet" href="/profile/shcal" title="Candidate Master shcal">shcal</a>, <a class="rated-user user-red" href="/profile/awesomeguy856" title="Grandmaster awesomeguy856">awesomeguy856</a>, <a class="rated-user user-blue" href="/profile/Extile" title="Expert Extile">Extile</a>, <a class="rated-user user-orange" href="/profile/Noobish_Monk" title="Master Noobish_Monk">Noobish_Monk</a>, <a class="rated-user user-red" href="/profile/__baozii__" title="International Grandmaster __baozii__">__baozii__</a>, <a class="rated-user user-blue" href="/profile/Amazed" title="Expert Amazed">Amazed</a>, <a class="rated-user user-legendary" href="/profile/SomethingNew" title="Legendary Grandmaster SomethingNew"><span class="legendary-user-first-letter">S</span>omethingNew</a>, <a class="rated-user user-red" href="/profile/awoo" title="Grandmaster awoo">awoo</a>, <a class="rated-user user-orange" href="/profile/-firefly-" title="Master -firefly-">-firefly-</a>, <a class="rated-user user-cyan" href="/profile/ink31930" title="Specialist ink31930">ink31930</a>, <a class="rated-user user-cyan" href="/profile/nik_exists" title="Specialist nik_exists">nik_exists</a>, <a class="rated-user user-blue" href="/profile/chromate00" title="Expert chromate00">chromate00</a>, <a class="rated-user user-cyan" href="/profile/cduckling" title="Specialist cduckling">cduckling</a>, <a class="rated-user user-violet" href="/profile/madlogic" title="Candidate Master madlogic">madlogic</a>, <a class="rated-user user-violet" href="/profile/Hori" title="Candidate Master Hori">Hori</a>, <a class="rated-user user-orange" href="/profile/misteg168" title="International Master misteg168">misteg168</a>, <a class="rated-user user-legendary" href="/profile/Dominater069" title="Legendary Grandmaster Dominater069"><span class="legendary-user-first-letter">D</span>ominater069</a>, <a class="rated-user user-legendary" href="/profile/errorgorn" title="Legendary Grandmaster errorgorn"><span class="legendary-user-first-letter">e</span>rrorgorn</a>, <a class="rated-user user-red" href="/profile/defnotmee" title="Grandmaster defnotmee">defnotmee</a>;</p></li>   <li><p>and of course <a class="rated-user user-admin" href="/profile/MikeMirzayanov" title="Headquarters, MikeMirzayanov">MikeMirzayanov</a> and <a class="rated-user user-legendary" href="/profile/KAN" title="Legendary Grandmaster KAN"><span class="legendary-user-first-letter">K</span>AN</a> for the Codeforces and Polygon platforms.</p></li> </ul><p><strong>UPD 1:</strong> The scoring distribution has been released!</p><p><strong>UPD 2:</strong> Editorial is released at <a href="https://codeforces.com/blog/entry/151886">https://codeforces.com/blog/entry/151886</a>. Hope you enjoyed the round!</p><p><strong>UPD 3:</strong> The results!</p><p><strong>Div. 1 + 2</strong></p> <ol>   <li><p><a class="rated-user user-legendary" href="/profile/ecnerwala" title="Legendary Grandmaster ecnerwala"><span class="legendary-user-first-letter">e</span>cnerwala</a></p></li>   <li><p><a class="rated-user user-legendary" href="/profile/ksun48" title="Legendary Grandmaster ksun48"><span class="legendary-user-first-letter">k</span>sun48</a></p></li>   <li><p><a class="rated-user user-legendary" href="/profile/tourist" title="Legendary Grandmaster tourist"><span class="legendary-user-first-letter">t</span>ourist</a></p></li>   <li><p><a class="rated-user user-legendary" href="/profile/turmax" title="Legendary Grandmaster turmax"><span class="legendary-user-first-letter">t</span>urmax</a></p></li>   <li><p><a class="rated-user user-red" href="/profile/hitonanode" title="International Grandmaster hitonanode">hitonanode</a></p></li>   <li><p><a class="rated-user user-legendary" href="/profile/jiangly" title="Legendary Grandmaster jiangly"><span class="legendary-user-first-letter">j</span>iangly</a></p></li>   <li><p><a class="rated-user user-red" href="/profile/Elysion" title="International Grandmaster Elysion">Elysion</a></p></li>   <li><p><a class="rated-user user-red" href="/profile/Kapt" title="International Grandmaster Kapt">Kapt</a></p></li>   <li><p><a class="rated-user user-red" href="/profile/tickcross.y" title="Grandmaster tickcross.y">tickcross.y</a></p></li>   <li><p><a class="rated-user user-legendary" href="/profile/StarSilk" title="Legendary Grandmaster StarSilk"><span class="legendary-user-first-letter">S</span>tarSilk</a></p></li> </ol><p><strong>First clears</strong></p><p>A. <a class="rated-user user-violet" href="/profile/LeonVir" title="Candidate Master LeonVir">LeonVir</a>, 00:01</p><p>B. <a class="rated-user user-legendary" href="/profile/ksun48" title="Legendary Grandmaster ksun48"><span class="legendary-user-first-letter">k</span>sun48</a>, 00:09</p><p>C. <a class="rated-user user-red" href="/profile/Golovanov399" title="International Grandmaster Golovanov399">Golovanov399</a>, 00:11</p><p>D. <a class="rated-user user-violet" href="/profile/PelicanPilot" title="Candidate Master PelicanPilot">PelicanPilot</a>, 00:16</p><p>E1. <a class="rated-user user-orange" href="/profile/liaoyanxu" title="Master liaoyanxu">liaoyanxu</a>, 00:14</p><p>E2. <a class="rated-user user-black" href="/profile/Ayush79" title="Unrated, Ayush79">Ayush79</a>, 00:33</p><p>F. <a class="rated-user user-red" href="/profile/littleju" title="Grandmaster littleju">littleju</a>, 00:34</p><p>G. <a class="rated-user user-red" href="/profile/ainta" title="International Grandmaster ainta">ainta</a>, 01:25</p><p>H1 + H2 + H3. <a class="rated-user user-legendary" href="/profile/ecnerwala" title="Legendary Grandmaster ecnerwala"><span class="legendary-user-first-letter">e</span>cnerwala</a>, 02:31</p></div>

            <p class="topic-options">
                <a class="topic-read-more" href="/blog/entry/151819">Full text and comments »</a>
            </p>
    </div>


        <div style="font-size: 1.1rem;line-height: 1.1rem;padding-bottom: 0.5em;">
            <img src="//codeforces.com/codeforces.org/s/99808/images/icons/paperclip-16x16.png" style="vertical-align: middle;"/> <span style="padding: 0 0.35em;">Announcement of <a href="/contest/2207" class="notice" style="text-decoration: none;">Codeforces Round 1085 (Div. 1 + Div. 2)</a> </span>
        </div>
        
            <script type="text/javascript">
    $(document).ready(function () {
        $(".delete-resource-link-219851-152460").click(function() {
            var that = this;
            Codeforces.confirm("Are you sure you want to detach a contest?", function () {
                $.post("/data/blogAndContest", {
                    action: "detachBlogFromContest",
                    blogId: "219851",
                    blogEntryId: "151819",
                    contestId: $(that).attr("data-contestId"),
                    resourceIds: $(that).attr("data-resourceIds")
                }, function(json) {        
                    Codeforces.reloadAndShowMessageOrShowError(json, "Contest detached");
                });
            }, function () {}, "Yes", "No");
        });
    });
</script>
        



    <div class="roundbox meta borderTopRound borderBottomRound" style="">
        <div class="left-meta">
            <ul>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-up-152460"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/voteup-gray.png"
            alt="Vote: I like it" title="Vote: I like it"
        /></a>


</li>
                    <li style="line-height: 1.6em;">

        
        <span class="topic-rating topic-rating-152460" title="Topic rating" data-topicId=152460 data-rawRating=435 style='font-size:larger;position:relative;bottom:1px;font-weight:bold;color:green'>+435</span>
        
</li>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-down-152460"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/votedown-gray.png"
            alt="Vote: I do not like it" title="Vote: I do not like it"
        /></a>


</li>
            </ul>
        </div>


            <span style="position: relative; line-height: 1.65em; top: 0.75rem; left: 0.8em;">
            </span>

        <div class="right-meta">
            <ul>
                    <li>        <a href="/profile/awang11"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/user_16x16.png"
            alt="Author" title="Author"
        /></a>


        <a href="/profile/awang11">
        awang11
        </a>
</li>
                    <li>        <img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/date_16x16.png"
            alt="Publication date" title="Publication date"
        />


        
        <span class="format-humantime" title="Mar/04/2026 18:54">3 weeks ago</span>
        
</li>
                    <li>        <a href="/blog/entry/151819#comments"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/comments_16x16.png"
            alt="Comments" title="Comments"
        /></a>


        <a href="/blog/entry/151819#comments">
        120
        </a>
</li>
            </ul>
        </div>

        <br style="clear:both;"/>
    </div>




<script type="text/javascript">
    $(document).ready(function () {
        let voteDirection = 0;

        function clickVote(direction) {
            if (direction === voteDirection) {
                direction = 0;
            }
            $.post("/data/topic/vote", {
                topicId: 152460,
                _tta: Codeforces.tta(),
                topicRevisionId: 425456,
                vote: direction,
            }, function (data) {
                if (data.success === "true") {
                    voteDirection = parseInt(data.voteDirection);
                    updateTopicVote(152460, voteDirection, data.processed === "true");
                }
                Codeforces.showMessage(data.message);
            }, "json");
        }

        $(".topic-vote-up-152460").click(function () {
            clickVote(+1);
            return false;
        });
        $(".topic-vote-down-152460").click(function () {
            clickVote(-1);
            return false;
        });
    });
</script></div>

</div>
<div style="margin-bottom:2em;">


<div class="has-topic-id topic" topicId="152457">
    <div class="title">
            <a href="/blog/entry/151816">            <p>Live online mirror of The 2026 ICPC Asia Pacific Championship</p>
</a>
    </div>

        <div class="info" style="position:relative;">
                By&nbsp;<a href="/profile/Pyqe" title="International Grandmaster Pyqe" class="rated-user user-red">Pyqe</a>,
                    <span class="format-humantime" title="Mar/04/2026 17:38">3 weeks ago</span>,
                
                <img style="position: relative;top: 5px;" src="//codeforces.com/codeforces.org/s/99808/images/flags/24/gb.png" alt="In English" title="In English"/>



            <div class="topic-actions smaller">
                <ul>


                </ul>
            </div>
        </div>

    <div class="content">
        <div class="ttypography"><p>Hello, Codeforces!</p><p>We would like to invite you to participate in the <a href="https://codeforces.com/contests/2206">live online mirror contest of The 2026 ICPC Asia Pacific Championship</a> next weekend. ICPC Asia Pacific Championship is the contest for top non-winning teams from all regional contests in the region to qualify to the World Finals. See the <a href="https://icpc.jp/apac/2025-26/rules/">region rules</a> and <a href="https://apac.icpc.global/">competition page</a> for more details.</p><p>The official contest is scheduled to start at <a href="https://www.timeanddate.com/worldclock/fixedtime.html?msg=The+2026+ICPC+Asia+Pacific+Championship&amp;iso=20260308T0930&amp;p1=4465&amp;ah=5">Sunday, 8 March 2026, 09:30 AM (UTC+8)</a>. The live online mirror contest is scheduled to start only <a href="https://www.timeanddate.com/worldclock/fixedtime.html?msg=The+2026+ICPC+Asia+Pacific+Championship+-+Online+Mirror&amp;iso=20260308T0945&amp;p1=4465&amp;ah=5"><strong>15 minutes later</strong></a>, to keep both contests run almost in sync. The contest is 5 hours long and consists of several problems.</p><p>Please note that we might have to postpone the live online mirror contest in case the official contest is delayed. This is to ensure that the tasks are not available to the public until the official contest starts.</p><p>The contest will use ICPC-style scoring (same as the official contest) and will be unrated. You can participate as an individual or as a team, although as a team of three members is preferred.</p><p>See you on the top of the leaderboard!</p><p>The 2026 ICPC Asia Pacific Championship Judges</p><p>[UPD]: <a href="https://codeforces.com/contest/2206/attachments/download/36244/analysis.pdf">Task analysis</a></p></div>

            <p class="topic-options">
                <a class="topic-read-more" href="/blog/entry/151816">Full text and comments »</a>
            </p>
    </div>


        <div style="font-size: 1.1rem;line-height: 1.1rem;padding-bottom: 0.5em;">
            <img src="//codeforces.com/codeforces.org/s/99808/images/icons/paperclip-16x16.png" style="vertical-align: middle;"/> <span style="padding: 0 0.35em;">Announcement of <a href="/contest/2206" class="notice" style="text-decoration: none;">2026 ICPC Asia Pacific Championship - Online Mirror (Unrated, Online Mirror, ICPC Rules, Teams Preferred)</a> </span>
        </div>
        
            <script type="text/javascript">
    $(document).ready(function () {
        $(".delete-resource-link-118490-152457").click(function() {
            var that = this;
            Codeforces.confirm("Are you sure you want to detach a contest?", function () {
                $.post("/data/blogAndContest", {
                    action: "detachBlogFromContest",
                    blogId: "118490",
                    blogEntryId: "151816",
                    contestId: $(that).attr("data-contestId"),
                    resourceIds: $(that).attr("data-resourceIds")
                }, function(json) {        
                    Codeforces.reloadAndShowMessageOrShowError(json, "Contest detached");
                });
            }, function () {}, "Yes", "No");
        });
    });
</script>
        



    <div class="roundbox meta borderTopRound borderBottomRound" style="">
        <div class="left-meta">
            <ul>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-up-152457"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/voteup-gray.png"
            alt="Vote: I like it" title="Vote: I like it"
        /></a>


</li>
                    <li style="line-height: 1.6em;">

        
        <span class="topic-rating topic-rating-152457" title="Topic rating" data-topicId=152457 data-rawRating=138 style='font-size:larger;position:relative;bottom:1px;font-weight:bold;color:green'>+138</span>
        
</li>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-down-152457"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/votedown-gray.png"
            alt="Vote: I do not like it" title="Vote: I do not like it"
        /></a>


</li>
            </ul>
        </div>


            <span style="position: relative; line-height: 1.65em; top: 0.75rem; left: 0.8em;">
            </span>

        <div class="right-meta">
            <ul>
                    <li>        <a href="/profile/Pyqe"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/user_16x16.png"
            alt="Author" title="Author"
        /></a>


        <a href="/profile/Pyqe">
        Pyqe
        </a>
</li>
                    <li>        <img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/date_16x16.png"
            alt="Publication date" title="Publication date"
        />


        
        <span class="format-humantime" title="Mar/04/2026 17:38">3 weeks ago</span>
        
</li>
                    <li>        <a href="/blog/entry/151816#comments"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/comments_16x16.png"
            alt="Comments" title="Comments"
        /></a>


        <a href="/blog/entry/151816#comments">
        9
        </a>
</li>
            </ul>
        </div>

        <br style="clear:both;"/>
    </div>




<script type="text/javascript">
    $(document).ready(function () {
        let voteDirection = 0;

        function clickVote(direction) {
            if (direction === voteDirection) {
                direction = 0;
            }
            $.post("/data/topic/vote", {
                topicId: 152457,
                _tta: Codeforces.tta(),
                topicRevisionId: 425403,
                vote: direction,
            }, function (data) {
                if (data.success === "true") {
                    voteDirection = parseInt(data.voteDirection);
                    updateTopicVote(152457, voteDirection, data.processed === "true");
                }
                Codeforces.showMessage(data.message);
            }, "json");
        }

        $(".topic-vote-up-152457").click(function () {
            clickVote(+1);
            return false;
        });
        $(".topic-vote-down-152457").click(function () {
            clickVote(-1);
            return false;
        });
    });
</script></div>

</div>
<div style="margin-bottom:2em;">


<div class="has-topic-id topic" topicId="151933">
    <div class="title">
            <a href="/blog/entry/151292">            <p>Kotlin Heroes 14 Announcement</p>
</a>
    </div>

        <div class="info" style="position:relative;">
                By&nbsp;<a href="/profile/BledDest" title="International Grandmaster BledDest" class="rated-user user-red">BledDest</a>,
                    <span class="format-humantime" title="Feb/19/2026 02:15">5 weeks ago</span>,
                
                <img style="position: relative;top: 5px;" src="//codeforces.com/codeforces.org/s/99808/images/flags/24/gb.png" alt="In English" title="In English"/>



            <div class="topic-actions smaller">
                <ul>


                </ul>
            </div>
        </div>

    <div class="content">
        <div class="ttypography"><p>Hello Codeforces!</p><p><img src="/predownloaded/06/ac/06ac0ca161da9600c032502a8e61c4f216557657.png" style="width: 350.0px;float: right;margin: 0 1.0em 1.0em 1.0em;max-width: 100.0%;max-height: 100.0%;" /></p><p>We are happy to announce the new episode of Kotlin Heroes! It is both an opportunity to try learning a new programming language (if you've never coded in Kotlin before) or solve programming problems of very different levels of difficulty in it (if you're already familiar with Kotlin). No matter if you're a professional or a beginner, we'll be glad to see you participate!</p><p>This is already the fourteenth time we conduct this competition, and the previous 13 episodes had lots of amazingly talented programmers participating. You can see for yourself by checking them out:  <a href="https://codeforces.com/contests/1170,1171">Episode 1</a>, <a href="https://codeforces.com/contests/1211,1212">Episode 2</a>, <a href="https://codeforces.com/contests/1297,1298">Episode 3</a>, <a href="https://codeforces.com/contests/1346,1347">Episode 4</a>, <a href="https://codeforces.com/contests/1432,1431">Episode 5: ICPC Round</a>, <a href="https://codeforces.com/contests/1488,1489">Episode 6</a>, <a href="https://codeforces.com/contests/1533,1532">Episode 7</a>, <a href="https://codeforces.com/contests/1571,1570">Episode 8</a>, <a href="https://codeforces.com/contests/1911,1910">Episode 9</a>, <a href="https://codeforces.com/contests/1959,1958">Episode 10</a>, <a href="https://codeforces.com/contests/2012,2011">Episode 11</a>, <a href="https://codeforces.com/contests/2087,2088">Episode 12</a> and <a href="https://codeforces.com/contests/2141,2142">Episode 13</a>. </p><p>To prepare for the Episode 14, we advise you to <strong>register to the</strong> <a href="https://codeforces.com/contests/2198">practice round</a>, which contains several problems of various difficulties from past Codeforces contests. In the practice round, all solutions will be open to view for anyone.</p><p>We also recommend that you check some resources which can help you learn more about competitive programming in Kotlin: </p> <ul>   <li>An official <a href="https://kotlinlang.org/docs/competitive-programming.html">competitive programming tutorial</a>.</li>   <li>A base of solutions for <a href="https://kotlinlang.org/docs/advent-of-code.html">Advent of Code algorithmic puzzles</a>.</li>   <li>A collection of videos on using <a href="https://www.youtube.com/playlist?list=PLlFc5cFwUnmyQA0l15nAfE1-pnu6fSvvG">Kotlin in Competitive Programming</a>, all arranged into one YouTube playlist.</li> </ul><p>And if you’d like to see how the top competitive programmers approach these challenges, <a href="https://www.youtube.com/watch?v=nkSbIi42l9U">check out</a> <a class="rated-user user-legendary" href="/profile/ecnerwala" title="Legendary Grandmaster ecnerwala"><span class="legendary-user-first-letter">e</span>cnerwala</a> and <a class="rated-user user-red" href="/profile/SecondThread" title="Grandmaster SecondThread">SecondThread</a> solving problems from this practice round live on stage at the ICPC World Finals in Baku. </p><p>On <strong>March 2, 2026</strong>, the main phase of the contest starts! During <a href="https://codeforces.com/contests/2199">Kotlin Heroes: Episode 14</a>, you will have 2 hours and 30 minutes to solve several programming problems, ranging from simple short exercises to challenges that will test both your coding skills and algorithmic thinking.</p><p><strong>The use of AI-based tools during the main contest is strictly limited.</strong> To find out the guidelines for proper AI use, what is allowed and what is prohibited, please read the post &quot;<a href="https://codeforces.com/blog/entry/133941">Rule Restricting the use of AI</a>&quot;. Improper use of AI tools during the main contest <strong>may result in disqualification</strong>. Using automatic translation tools (including but not limited to neural networks and AI) to convert code written in other programming languages to Kotlin goes against the spirit of the competition, so it is also strictly prohibited.</p> <p style="margin: 2.5em;"> </p><center> <a href="https://codeforces.com/contests/2198,2199" style="font-size: 16.0px;background-color: rgb(22,22,56);border: 1.0px solid rgb(26,35,126);padding: 8.0px 16.0px;color: rgb(54,193,135);font-weight: bold;text-decoration: none;">REGISTER →</a> </center> <p><strong>Prizes:</strong></p> <ul>   <li>🥇 $512 (or equivalent value) for 1st place</li>   <li>🥈 $256 for 2nd place</li>   <li>🥉 $128 for 3rd place</li>   <li>👕 Kotlin Heroes T-shirts for the top 50 participants</li>   <li>🎁 A raffle of 50 T-shirts for anyone who solves at least one problem</li> </ul><p>Please note that we are not able to ship prizes to any country, state, province, or territory subject to comprehensive OFAC sanctions, including Belarus, Cuba, Iran, North Korea, Russia, Syria, or the Crimea, Donetsk, or Luhansk regions. For complete the list, please visit <a href="https://ofac.treasury.gov/sanctions-programs-and-country-information">this page</a>.</p><p>Good luck to all of the participants! I hope you will enjoy the problems we've prepared.</p></div>

            <p class="topic-options">
                <a class="topic-read-more" href="/blog/entry/151292">Full text and comments »</a>
            </p>
    </div>


        <div style="font-size: 1.1rem;line-height: 1.1rem;padding-bottom: 0.5em;">
            <img src="//codeforces.com/codeforces.org/s/99808/images/icons/paperclip-16x16.png" style="vertical-align: middle;"/> <span style="padding: 0 0.35em;">Announcement of <a href="/contest/2199" class="notice" style="text-decoration: none;">Kotlin Heroes: Episode 14</a> </span>
        </div>
        
            <script type="text/javascript">
    $(document).ready(function () {
        $(".delete-resource-link-53375-151933").click(function() {
            var that = this;
            Codeforces.confirm("Are you sure you want to detach a contest?", function () {
                $.post("/data/blogAndContest", {
                    action: "detachBlogFromContest",
                    blogId: "53375",
                    blogEntryId: "151292",
                    contestId: $(that).attr("data-contestId"),
                    resourceIds: $(that).attr("data-resourceIds")
                }, function(json) {        
                    Codeforces.reloadAndShowMessageOrShowError(json, "Contest detached");
                });
            }, function () {}, "Yes", "No");
        });
    });
</script>
        



    <div class="roundbox meta borderTopRound borderBottomRound" style="">
        <div class="left-meta">
            <ul>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-up-151933"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/voteup-gray.png"
            alt="Vote: I like it" title="Vote: I like it"
        /></a>


</li>
                    <li style="line-height: 1.6em;">

        
        <span class="topic-rating topic-rating-151933" title="Topic rating" data-topicId=151933 data-rawRating=90 style='font-size:larger;position:relative;bottom:1px;font-weight:bold;color:green'>+90</span>
        
</li>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-down-151933"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/votedown-gray.png"
            alt="Vote: I do not like it" title="Vote: I do not like it"
        /></a>


</li>
            </ul>
        </div>


            <span style="position: relative; line-height: 1.65em; top: 0.75rem; left: 0.8em;">
            </span>

        <div class="right-meta">
            <ul>
                    <li>        <a href="/profile/BledDest"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/user_16x16.png"
            alt="Author" title="Author"
        /></a>


        <a href="/profile/BledDest">
        BledDest
        </a>
</li>
                    <li>        <img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/date_16x16.png"
            alt="Publication date" title="Publication date"
        />


        
        <span class="format-humantime" title="Feb/19/2026 02:15">5 weeks ago</span>
        
</li>
                    <li>        <a href="/blog/entry/151292#comments"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/comments_16x16.png"
            alt="Comments" title="Comments"
        /></a>


        <a href="/blog/entry/151292#comments">
        27
        </a>
</li>
            </ul>
        </div>

        <br style="clear:both;"/>
    </div>




<script type="text/javascript">
    $(document).ready(function () {
        let voteDirection = 0;

        function clickVote(direction) {
            if (direction === voteDirection) {
                direction = 0;
            }
            $.post("/data/topic/vote", {
                topicId: 151933,
                _tta: Codeforces.tta(),
                topicRevisionId: 424164,
                vote: direction,
            }, function (data) {
                if (data.success === "true") {
                    voteDirection = parseInt(data.voteDirection);
                    updateTopicVote(151933, voteDirection, data.processed === "true");
                }
                Codeforces.showMessage(data.message);
            }, "json");
        }

        $(".topic-vote-up-151933").click(function () {
            clickVote(+1);
            return false;
        });
        $(".topic-vote-down-151933").click(function () {
            clickVote(-1);
            return false;
        });
    });
</script></div>

</div>
<div style="margin-bottom:2em;">


<div class="has-topic-id topic" topicId="152335">
    <div class="title">
            <a href="/blog/entry/151694">            <p>Codeforces Blitz Cup 2026 — Final Day</p>
</a>
    </div>

        <div class="info" style="position:relative;">
                By&nbsp;<a href="/profile/KAN" title="Legendary Grandmaster KAN" class="rated-user user-legendary"><span class="legendary-user-first-letter">K</span>AN</a>,
                    <span class="format-humantime" title="Mar/01/2026 02:20">3 weeks ago</span>,
                
                <img style="position: relative;top: 5px;" src="//codeforces.com/codeforces.org/s/99808/images/flags/24/gb.png" alt="In English" title="In English"/>



            <div class="topic-actions smaller">
                <ul>


                </ul>
            </div>
        </div>

    <div class="content">
        <div class="ttypography"><h3>Hi all!</h3><p>The <a href="/blog/entry/150813">second edition of the Blitz Cup</a> is concluding this weekend! The final bracket is shown below. On <strong>Saturday</strong>, 10 matches were played with live commentary, and we watched quite a few tight fights! <a href="https://www.youtube.com/watch?v=Zo_g7svroG4">Recording is available on Youtube</a>.</p> <center style="margin: 2.0em;">  <img src="/predownloaded/be/bf/bebf5b8035979edb353d0f1098fe6f9274f6350c.png" style="max-width: 100.0%;max-height: 100.0%;" /> </center> <center style="margin: 2.0em;">  <a href="/publish/blitz2026/bracket.html" style="display: block;background: rgb(30,142,205);width: 200.0px;text-decoration: none;font-size: 18.0px;color: white;font-weight: bold;padding: 0.5em 1.0em;">Full bracket</a> </center><h3>Final day</h3><p>On <strong>Sunday</strong>, we're playing the remaining matches: two quarterfinals, two semifinals, and the final match! The schedule is as follows:</p> <ul>   <li>Starting 12:05 UTC, <a class="rated-user user-legendary" href="/profile/tourist" title="Legendary Grandmaster tourist"><span class="legendary-user-first-letter">t</span>ourist</a> vs <a class="rated-user user-legendary" href="/profile/Ormlis" title="Legendary Grandmaster Ormlis"><span class="legendary-user-first-letter">O</span>rmlis</a> Quarterfinals;</li>   <li>13:05 UTC, <a class="rated-user user-legendary" href="/profile/ecnerwala" title="Legendary Grandmaster ecnerwala"><span class="legendary-user-first-letter">e</span>cnerwala</a> vs <a class="rated-user user-red" href="/profile/feecle6418" title="International Grandmaster feecle6418">feecle6418</a> Quarterfinals;</li>   <li>14:05 UTC, <a class="rated-user user-legendary" href="/profile/Um_nik" title="Legendary Grandmaster Um_nik"><span class="legendary-user-first-letter">U</span>m_nik</a> vs winner of (<a class="rated-user user-legendary" href="/profile/tourist" title="Legendary Grandmaster tourist"><span class="legendary-user-first-letter">t</span>ourist</a> vs <a class="rated-user user-legendary" href="/profile/Ormlis" title="Legendary Grandmaster Ormlis"><span class="legendary-user-first-letter">O</span>rmlis</a>) Semifinals;</li>   <li>15:05 UTC, <a class="rated-user user-legendary" href="/profile/ksun48" title="Legendary Grandmaster ksun48"><span class="legendary-user-first-letter">k</span>sun48</a> vs winner of (<a class="rated-user user-legendary" href="/profile/ecnerwala" title="Legendary Grandmaster ecnerwala"><span class="legendary-user-first-letter">e</span>cnerwala</a> vs <a class="rated-user user-red" href="/profile/feecle6418" title="International Grandmaster feecle6418">feecle6418</a>) Semifinals;</li>   <li>16:05 UTC, the final match!</li> </ul><p>Tune in at <strong>12:00 UTC</strong> to the stream below to watch the action!</p> <center style="margin: 2.0em;">  <iframe allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen="" frameborder="0" height="375" referrerpolicy="strict-origin-when-cross-origin" src="https://www.youtube.com/embed/4tDbei91Ziw?si=OLzpkAJVosHEFxeq" title="YouTube video player" width="600"></iframe> </center><p><strong>UPD</strong></p><p>Congratulations to <a class="rated-user user-legendary" href="/profile/Um_nik" title="Legendary Grandmaster Um_nik"><span class="legendary-user-first-letter">U</span>m_nik</a>, our Codeforces Blitz Cup 2026 Champion! </p><p><img alt=" " src="/predownloaded/ee/59/ee595cbcef97006f5077ec58ab44e13bde747230.png" style="max-width: 100.0%;max-height: 100.0%;" /></p></div>

            <p class="topic-options">
                <a class="topic-read-more" href="/blog/entry/151694">Full text and comments »</a>
            </p>
    </div>


        
            <script type="text/javascript">
    $(document).ready(function () {
        $(".delete-resource-link-50818-152335").click(function() {
            var that = this;
            Codeforces.confirm("Are you sure you want to detach a contest?", function () {
                $.post("/data/blogAndContest", {
                    action: "detachBlogFromContest",
                    blogId: "50818",
                    blogEntryId: "151694",
                    contestId: $(that).attr("data-contestId"),
                    resourceIds: $(that).attr("data-resourceIds")
                }, function(json) {        
                    Codeforces.reloadAndShowMessageOrShowError(json, "Contest detached");
                });
            }, function () {}, "Yes", "No");
        });
    });
</script>
        

        <div style="font-size: 1.1rem;line-height: 11px;">
            <img style="vertical-align: middle;" src="//codeforces.com/codeforces.org/s/99808/images/blog/tags.png" title="Tags" alt="Tags"/>
                <span style="padding: 0 0.35em;">
    <a href="/search?query=blitz" class="tag notice" style="text-decoration: none;">blitz</a>,
                </span>
                <span style="padding: 0 0.35em;">
    <a href="/search?query=blitz+cup" class="tag notice" style="text-decoration: none;">blitz cup</a>,
                </span>
                <span style="padding: 0 0.35em;">
    <a href="/search?query=blitz+cup+2026" class="tag notice" style="text-decoration: none;">blitz cup 2026</a>
                </span>
        </div>


    <div class="roundbox meta borderTopRound borderBottomRound" style="">
        <div class="left-meta">
            <ul>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-up-152335"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/voteup-gray.png"
            alt="Vote: I like it" title="Vote: I like it"
        /></a>


</li>
                    <li style="line-height: 1.6em;">

        
        <span class="topic-rating topic-rating-152335" title="Topic rating" data-topicId=152335 data-rawRating=305 style='font-size:larger;position:relative;bottom:1px;font-weight:bold;color:green'>+305</span>
        
</li>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-down-152335"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/votedown-gray.png"
            alt="Vote: I do not like it" title="Vote: I do not like it"
        /></a>


</li>
            </ul>
        </div>


            <span style="position: relative; line-height: 1.65em; top: 0.75rem; left: 0.8em;">
            </span>

        <div class="right-meta">
            <ul>
                    <li>        <a href="/profile/KAN"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/user_16x16.png"
            alt="Author" title="Author"
        /></a>


        <a href="/profile/KAN">
        KAN
        </a>
</li>
                    <li>        <img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/date_16x16.png"
            alt="Publication date" title="Publication date"
        />


        
        <span class="format-humantime" title="Mar/01/2026 02:20">3 weeks ago</span>
        
</li>
                    <li>        <a href="/blog/entry/151694#comments"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/comments_16x16.png"
            alt="Comments" title="Comments"
        /></a>


        <a href="/blog/entry/151694#comments">
        31
        </a>
</li>
            </ul>
        </div>

        <br style="clear:both;"/>
    </div>




<script type="text/javascript">
    $(document).ready(function () {
        let voteDirection = 0;

        function clickVote(direction) {
            if (direction === voteDirection) {
                direction = 0;
            }
            $.post("/data/topic/vote", {
                topicId: 152335,
                _tta: Codeforces.tta(),
                topicRevisionId: 425258,
                vote: direction,
            }, function (data) {
                if (data.success === "true") {
                    voteDirection = parseInt(data.voteDirection);
                    updateTopicVote(152335, voteDirection, data.processed === "true");
                }
                Codeforces.showMessage(data.message);
            }, "json");
        }

        $(".topic-vote-up-152335").click(function () {
            clickVote(+1);
            return false;
        });
        $(".topic-vote-down-152335").click(function () {
            clickVote(-1);
            return false;
        });
    });
</script></div>

</div>
<div style="margin-bottom:2em;">


<div class="has-topic-id topic" topicId="151454">
    <div class="title">
            <a href="/blog/entry/150813">            <p>Codeforces Blitz Cup 2026</p>
</a>
    </div>

        <div class="info" style="position:relative;">
                By&nbsp;<a href="/profile/KAN" title="Legendary Grandmaster KAN" class="rated-user user-legendary"><span class="legendary-user-first-letter">K</span>AN</a>,
                    <span class="format-humantime" title="Feb/03/2026 20:36">7 weeks ago</span>,
                translation,
                <img style="position: relative;top: 5px;" src="//codeforces.com/codeforces.org/s/99808/images/flags/24/gb.png" alt="In English" title="In English"/>



            <div class="topic-actions smaller">
                <ul>


                </ul>
            </div>
        </div>

    <div class="content">
        <div class="ttypography"><center style="margin: 2.0em;">  <img src="/predownloaded/a7/e8/a7e8478b9af90246ebd2a4e42b9bbbafd392b64f.png" style="max-width: 100.0%;max-height: 100.0%;" /> </center><p>Hi Codeforces!</p><p>I have a great announcement for you. This month, we're holding the second Codeforces Blitz Cup! Remember all the WA1s and CEs we've seen from LGMs stressing out to submit before the opponent? They are coming back!</p><p>The Codeforces Blitz Cup is a single-elimination personal tournament where matches follow the special Blitz Rules. In short, each match is a 40-minute PvP contest, where problems open one by one, and only the first AC counts. The players can't use any help or prewritten code except a small template, and we get to watch them think and code live.</p> <ul>   <li><a href="/r/blitz-rules">Detailed rules</a></li>   <li><a href="/publish/blitz2026/bracket.html">Bracket</a></li> </ul><p>Check out last year's final rounds streams: <a href="https://www.youtube.com/watch?v=caoeMuNNQtg&amp;embeds_referring_euri=https%3A%2F%2Fcodeforces.com%2F">day 1</a>, and the <a href="https://www.youtube.com/watch?v=rbHFLNg7Nkc&amp;embeds_referring_euri=https%3A%2F%2Fcodeforces.com%2F">final day 2</a> to get the feel for the format.</p> <ul>   <li>Eligibility: <span style="color: red;font-weight: bold;">Grandmasters</span> or above</li>   <li>Registration deadline: <strong>February 12, 10:00 UTC</strong></li>   <li>Elimination rounds: February 13th to 26th (free schedule)</li>   <li>Live finals: February 28 to March 1 (online)</li> </ul><p>See you blitzing!</p><p><strong>UPD</strong></p><p>And we know our finalists! Congratulations to <a class="rated-user user-red" href="/profile/__baozii__" title="International Grandmaster __baozii__">__baozii__</a>, <a class="rated-user user-red" href="/profile/244mhq" title="International Grandmaster 244mhq">244mhq</a>, <a class="rated-user user-red" href="/profile/Amoo_Safar" title="International Grandmaster Amoo_Safar">Amoo_Safar</a>, <a class="rated-user user-legendary" href="/profile/Dominater069" title="Legendary Grandmaster Dominater069"><span class="legendary-user-first-letter">D</span>ominater069</a>, <a class="rated-user user-legendary" href="/profile/ecnerwala" title="Legendary Grandmaster ecnerwala"><span class="legendary-user-first-letter">e</span>cnerwala</a>, <a class="rated-user user-legendary" href="/profile/errorgorn" title="Legendary Grandmaster errorgorn"><span class="legendary-user-first-letter">e</span>rrorgorn</a>, <a class="rated-user user-red" href="/profile/feecIe6418" title="International Grandmaster feecIe6418">feecIe6418</a>, <a class="rated-user user-legendary" href="/profile/Geothermal" title="Legendary Grandmaster Geothermal"><span class="legendary-user-first-letter">G</span>eothermal</a>, <a class="rated-user user-legendary" href="/profile/ksun48" title="Legendary Grandmaster ksun48"><span class="legendary-user-first-letter">k</span>sun48</a>, <a class="rated-user user-legendary" href="/profile/makrav" title="Legendary Grandmaster makrav"><span class="legendary-user-first-letter">m</span>akrav</a>, <a class="rated-user user-legendary" href="/profile/Ormlis" title="Legendary Grandmaster Ormlis"><span class="legendary-user-first-letter">O</span>rmlis</a>, <a class="rated-user user-legendary" href="/profile/qiuzx" title="Legendary Grandmaster qiuzx"><span class="legendary-user-first-letter">q</span>iuzx</a>, <a class="rated-user user-legendary" href="/profile/SSerxhs" title="Legendary Grandmaster SSerxhs"><span class="legendary-user-first-letter">S</span>Serxhs</a>, <a class="rated-user user-legendary" href="/profile/tourist" title="Legendary Grandmaster tourist"><span class="legendary-user-first-letter">t</span>ourist</a>, <a class="rated-user user-legendary" href="/profile/turmax" title="Legendary Grandmaster turmax"><span class="legendary-user-first-letter">t</span>urmax</a>, <a class="rated-user user-legendary" href="/profile/Um_nik" title="Legendary Grandmaster Um_nik"><span class="legendary-user-first-letter">U</span>m_nik</a>, and see you all on the livestream! </p> <center style="margin: 2.0em;">  <iframe allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen="" frameborder="0" height="315" referrerpolicy="strict-origin-when-cross-origin" src="https://www.youtube.com/embed/Zo_g7svroG4?si=yTOrpj3UslRH1l8B" title="YouTube video player" width="400"></iframe> <iframe allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen="" frameborder="0" height="315" referrerpolicy="strict-origin-when-cross-origin" src="https://www.youtube.com/embed/4tDbei91Ziw?si=OLzpkAJVosHEFxeq" title="YouTube video player" width="400"></iframe> </center></div>

            <p class="topic-options">
                <a class="topic-read-more" href="/blog/entry/150813">Full text and comments »</a>
            </p>
    </div>


        
            <script type="text/javascript">
    $(document).ready(function () {
        $(".delete-resource-link-50818-151454").click(function() {
            var that = this;
            Codeforces.confirm("Are you sure you want to detach a contest?", function () {
                $.post("/data/blogAndContest", {
                    action: "detachBlogFromContest",
                    blogId: "50818",
                    blogEntryId: "150813",
                    contestId: $(that).attr("data-contestId"),
                    resourceIds: $(that).attr("data-resourceIds")
                }, function(json) {        
                    Codeforces.reloadAndShowMessageOrShowError(json, "Contest detached");
                });
            }, function () {}, "Yes", "No");
        });
    });
</script>
        

        <div style="font-size: 1.1rem;line-height: 11px;">
            <img style="vertical-align: middle;" src="//codeforces.com/codeforces.org/s/99808/images/blog/tags.png" title="Tags" alt="Tags"/>
                <span style="padding: 0 0.35em;">
    <a href="/search?query=blitz" class="tag notice" style="text-decoration: none;">blitz</a>,
                </span>
                <span style="padding: 0 0.35em;">
    <a href="/search?query=blitz+cup" class="tag notice" style="text-decoration: none;">blitz cup</a>,
                </span>
                <span style="padding: 0 0.35em;">
    <a href="/search?query=blitz+cup+2026" class="tag notice" style="text-decoration: none;">blitz cup 2026</a>
                </span>
        </div>


    <div class="roundbox meta borderTopRound borderBottomRound" style="">
        <div class="left-meta">
            <ul>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-up-151454"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/voteup-gray.png"
            alt="Vote: I like it" title="Vote: I like it"
        /></a>


</li>
                    <li style="line-height: 1.6em;">

        
        <span class="topic-rating topic-rating-151454" title="Topic rating" data-topicId=151454 data-rawRating=684 style='font-size:larger;position:relative;bottom:1px;font-weight:bold;color:green'>+684</span>
        
</li>
                    <li style="line-height: 1.6em;">        <a href="#" class="topic-vote-down-151454"><img style="vertical-align:middle;position:relative;top:-0.2em" src="//codeforces.com/codeforces.org/s/99808/images/actions/votedown-gray.png"
            alt="Vote: I do not like it" title="Vote: I do not like it"
        /></a>


</li>
            </ul>
        </div>


            <span style="position: relative; line-height: 1.65em; top: 0.75rem; left: 0.8em;">
            </span>

        <div class="right-meta">
            <ul>
                    <li>        <a href="/profile/KAN"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/user_16x16.png"
            alt="Author" title="Author"
        /></a>


        <a href="/profile/KAN">
        KAN
        </a>
</li>
                    <li>        <img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/date_16x16.png"
            alt="Publication date" title="Publication date"
        />


        
        <span class="format-humantime" title="Feb/03/2026 20:36">7 weeks ago</span>
        
</li>
                    <li>        <a href="/blog/entry/150813#comments"><img style="vertical-align:middle;position:relative;top:-1px" src="//codeforces.com/codeforces.org/s/99808/images/blog/comments_16x16.png"
            alt="Comments" title="Comments"
        /></a>


        <a href="/blog/entry/150813#comments">
        50
        </a>
</li>
            </ul>
        </div>

        <br style="clear:both;"/>
    </div>




<script type="text/javascript">
    $(document).ready(function () {
        let voteDirection = 0;

        function clickVote(direction) {
            if (direction === voteDirection) {
                direction = 0;
            }
            $.post("/data/topic/vote", {
                topicId: 151454,
                _tta: Codeforces.tta(),
                topicRevisionId: 424695,
                vote: direction,
            }, function (data) {
                if (data.success === "true") {
                    voteDirection = parseInt(data.voteDirection);
                    updateTopicVote(151454, voteDirection, data.processed === "true");
                }
                Codeforces.showMessage(data.message);
            }, "json");
        }

        $(".topic-vote-up-151454").click(function () {
            clickVote(+1);
            return false;
        });
        $(".topic-vote-down-151454").click(function () {
            clickVote(-1);
            return false;
        });
    });
</script></div>

</div>

<div class="pagination">
    <ul>
            <span class="inactive">&larr;</span>
        <li>
                <span class="page-index active" pageIndex="1"><a href="/page/1">1</a></span>
        </li>
        <li>
                <span class="page-index" pageIndex="2"><a href="/page/2">2</a></span>
        </li>
        <li>
                <span class="page-index" pageIndex="3"><a href="/page/3">3</a></span>
        </li>
        <li>
                ...
        </li>
        <li>
                <span class="page-index" pageIndex="259"><a href="/page/259">259</a></span>
        </li>
        <li>
                <span class="page-index" pageIndex="260"><a href="/page/260">260</a></span>
        </li>
            <li><a href="/page/2" class="arrow">&rarr;</a></li>
    </ul>
</div>
    <script type="text/javascript">
        $(document).ready(function () {
function handlePaginationKeyboardEvent(right) {
    var pageIndex = parseInt($(".pagination").find("span.active").attr("pageIndex"));
    if (right) {
        pageIndex++;
    } else {
        pageIndex--;
    }
    $(".pagination").find("span[pageIndex=" + pageIndex + "]").each(function () {
        Codeforces.redirect($(this).find("a").attr("href"));
    });
}

$(document).bind('keydown', 'ctrl+left', function() {
    handlePaginationKeyboardEvent(false);
});

$(document).bind('keydown', 'ctrl+right', function() {
    handlePaginationKeyboardEvent(true);
});
        });
    </script>                </div>
        </div>
            <br style="clear: both;"/>
            <div id="footer">
                <div><a href="https://codeforces.com/">Codeforces</a> (c) Copyright 2010-2026 Mike Mirzayanov</div>
                <div>The only programming contests Web 2.0 platform</div>
                    <div>Server time: <span class="format-timewithseconds" data-locale="en">Mar/23/2026 16:51:19</span> (k1).</div>
                    <div>Desktop version, switch to <a rel="nofollow" class="switchToMobile" href="?mobile=true">mobile version</a>.</div>
                <div class="smaller">
                    <a href="/privacy">Privacy Policy</a>
                    |
                    <a href="/terms">Terms and Conditions</a>
                </div>

                    <div style="margin-top: 25px;">
                        Supported by
                    </div>
                        <div style="text-align: center; margin-top: 8px;">
                            <a href="https://ton.org/"><img style="width: 60px;" src="//codeforces.com/codeforces.org/s/99808/images/ton-100x100.png" alt="TON" title="TON"/></a>
                        </div>
            </div>
        <script type="text/javascript">
            $(function() {
                $(".switchToMobile").click(function() {
                    Codeforces.redirect(Codeforces.updateUrlParameter(document.location.href, "mobile", "true"));
                    return false;
                });
                $(".switchToDesktop").click(function() {
                    Codeforces.redirect(Codeforces.updateUrlParameter(document.location.href, "mobile", "false"));
                    return false;
                });
            });
        </script>
    <script type="text/javascript">
        $(document).ready(function () {
            if ($(window).width() < 1600) {
                $('.button-up').css('width', '30px').css('line-height', '30px').css('font-size', '20px');
            }

            if ($(window).width() >= 1200) {
                $ (window).scroll (function () {
                    if ($ (this).scrollTop () > 100) {
                        $ ('.button-up').fadeIn();
                    } else {
                        $ ('.button-up').fadeOut();
                    }
                });

                $('.button-up').click(function () {
                    $('body,html').animate({
                        scrollTop: 0
                    }, 500);
                    return false;
                });

                $('.button-up').hover(function () {
                    $(this).animate({
                        'opacity':'1'
                    }).css({'background-color':'#e7ebf0','color':'#6a86a4'});
                }, function () {
                    $(this).animate({
                        'opacity':'0.7'
                    }).css({'background':'none','color':'#d3dbe4'});;
                });
            }

            Codeforces.focusOnError();

            Codeforces.setCopiedToClipboardText("Copied to clipboard");
            Codeforces.listenCopyable();
        });
    </script>
    <div class="userListsFacebox" style="display:none;">
        <div style="padding: 0.5em; width: 600px; max-height: 200px; overflow-y: auto">
<div class="datatable"
     
     style="background-color: #E1E1E1; padding-bottom: 3px;">
            <div class="lt">&nbsp;</div>
            <div class="rt">&nbsp;</div>
            <div class="lb">&nbsp;</div>
            <div class="rb">&nbsp;</div>

            <div style="padding: 4px 0 0 6px;font-size:1.4rem;position:relative;">
                User lists

                <div style="position:absolute;right:0.25em;top:0.35em;">
                    <span style="padding:0;position:relative;bottom:2px;" class="rowCount"></span>

                    <img class="closed" src="//codeforces.com/codeforces.org/s/99808/images/icons/magnifier-medium.png"/>

                    <span class="filter" style="display:none;">
                        <img class="opened" src="//codeforces.com/codeforces.org/s/99808/images/icons/control-270.png"/>
                        <input style="padding:0 0 0 20px;position:relative;bottom:2px;border:1px solid #aaa;height:17px;font-size:1.3rem;"/>
                    </span>
                </div>
            </div>
            <div style="background-color: white;margin:0.3em 3px 0 3px;position:relative;">
            <div class="ilt">&nbsp;</div>
            <div class="irt">&nbsp;</div>
            <table class="">
                <thead>
                <tr>
                    <th>Name</th>
                </tr>
                </thead>
                <tbody>
                </tbody>
            </table>
            </div>
        </div>
    <script type="text/javascript">
        $(document).ready(function () {
                // Create new ':containsIgnoreCase' selector for search
                jQuery.expr[':'].containsIgnoreCase = function(a, i, m) {
                    return jQuery(a).text().toUpperCase()
                            .indexOf(m[3].toUpperCase()) >= 0;
                };

                if (window.updateDatatableFilter == undefined) {
                    window.updateDatatableFilter = function(i) {
                        var parent = $(i).parent().parent().parent().parent();
                        $("tr.no-items", parent).remove();
                        $("tr", parent).hide().removeClass('visible');
                        var text = $(i).val();
                        if (text) {
                            $("tr" + ":containsIgnoreCase('" + text + "')", parent).show().addClass('visible');
                        } else {
                            parent.find(".rowCount").text("");
                            $("tr", parent).show().addClass('visible');
                        }

                        var found = false;
                        var visibleRowCount = 0;
                        $("tr", parent).each(function () {
                            if (!found) {
                                if ($(this).find("th").size() > 0) {
                                    $(this).show().addClass('visible');
                                    found = true;
                                }
                            }
                            if ($(this).hasClass('visible')) {
                                visibleRowCount++;
                            }
                        });
                        if (text) {
                            parent.find(".rowCount").text("Matches: " + (visibleRowCount - (found ? 1 : 0)));
                        }
                        if (visibleRowCount == (found ? 1 : 0)) {
                            $("<tr class='no-items visible'><td style=\"text-align:left;\"colspan=\"32\">No items<\/td><\/tr>").appendTo($(parent).find('table'));
                        }
                        $(parent).find("tr td").removeClass("dark");
                        $(parent).find("tr.visible:odd td").addClass("dark");
                    }

                    $(".datatable .closed").click(function () {
                        var parent = $(this).parent();
                        $(this).hide();
                        $(".filter", parent).fadeIn(function () {
                            $("input", parent).val("").focus().css("border", "1px solid #aaa");
                        });
                    });

                    $(".datatable .opened").click(function () {
                        var parent = $(this).parent().parent();
                        $(".filter", parent).fadeOut(function () {
                            $(".closed", parent).show();
                            $("input", parent).val("").each(function () {
                                window.updateDatatableFilter(this);
                            });
                        });
                    });

                    $(".datatable .filter input").keyup(function(e) {
                        window.updateDatatableFilter(this);
                        e.preventDefault();
                        e.stopPropagation();
                    });

                    $(".datatable table").each(function () {
                        var found = false;
                        $("tr", this).each(function () {
                            if (!found && $(this).find("th").size() == 0) {
                                found = true;
                            }
                        });
                        if (!found) {
                            $("<tr class='no-items visible'><td style=\"text-align:left;\"colspan=\"32\">No items<\/td><\/tr>").appendTo(this);
                        }
                    });

                    // Applies styles to datatables.
                    $(".datatable").each(function () {
                        $(this).find("tr:first th").addClass("top");
                        $(this).find("tr:last td").addClass("bottom");
                        $(this).find("tr:odd td").addClass("dark");
                        $(this).find("tr td:first-child, tr th:first-child").addClass("left");
                        $(this).find("tr td:last-child, tr th:last-child").addClass("right");
                    });

                    $(".datatable table.tablesorter").each(function () {
                        $(this).bind("sortEnd", function () {
                            $(".datatable").each(function () {
                                $(this).find("th, td")
                                    .removeClass("top").removeClass("bottom")
                                    .removeClass("left").removeClass("right")
                                    .removeClass("dark");
                                $(this).find("tr:first th").addClass("top");
                                $(this).find("tr:last td").addClass("bottom");
                                $(this).find("tr:odd td").addClass("dark");
                                $(this).find("tr td:first-child, tr th:first-child").addClass("left");
                                $(this).find("tr td:last-child, tr th:last-child").addClass("right");
                            });
                        });
                    });
                }
        });
    </script>
        </div>
    </div>
    <script type="application/javascript">
        $(function() {
            $(".userListMarker").click(function() {
                $.post("/data/lists", {action: "findTouched"}, function(json) {
                    Codeforces.facebox(".userListsFacebox");
                    var tbody = $("#facebox tbody");
                    tbody.empty();
                    for (var i in json) {
                        tbody.append(
                            $("<tr></tr>").append(
                                $("<td></td>").attr("data-readKey", json[i].readKey).text(json[i].name)
                            )
                        );
                    }
                    Codeforces.updateDatatables();
                    tbody.find("td").css("cursor", "pointer").click(function() {
                        document.location = Codeforces.updateUrlParameter(document.location.href, "list", $(this).attr("data-readKey"));
                    });
                }, "json");
            });
        });
    </script>
</div>
    <script type="application/javascript">
        if ('serviceWorker' in navigator && 'fetch' in window && 'caches' in window) {
            navigator.serviceWorker.register('/service-worker-99808.js')
                .then(function (registration) {
                    console.log('Service worker registered: ', registration);
                })
                .catch(function (error) {
                    console.log('Registration failed: ', error);
                });
        }
    </script>
<script>(function(){function c(){var b=a.contentDocument||a.contentWindow.document;if(b){var d=b.createElement('script');d.innerHTML="window.__CF$cv$params={r:'9e0de90278457710',t:'MTc3NDI3Mzg3OQ=='};var a=document.createElement('script');a.src='/cdn-cgi/challenge-platform/scripts/jsd/main.js';document.getElementsByTagName('head')[0].appendChild(a);";b.getElementsByTagName('head')[0].appendChild(d)}}if(document.body){var a=document.createElement('iframe');a.height=1;a.width=1;a.style.position='absolute';a.style.top=0;a.style.left=0;a.style.border='none';a.style.visibility='hidden';document.body.appendChild(a);if('loading'!==document.readyState)c();else if(window.addEventListener)document.addEventListener('DOMContentLoaded',c);else{var e=document.onreadystatechange||function(){};document.onreadystatechange=function(b){e(b);'loading'!==document.readyState&&(document.onreadystatechange=e,c())}}}})();</script></body>
</html>


RAW_DATA_END */