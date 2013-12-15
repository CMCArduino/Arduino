


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=10">
        <title>AHW/LCD_TEMP/LCD_TEMP.ino at master · dontsovcmc/AHW</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <link rel="logo" type="image/svg" href="https://github-media-downloads.s3.amazonaws.com/github-logo.svg" />
    <meta property="og:image" content="https://github.global.ssl.fastly.net/images/modules/logos_page/Octocat.png">
    <meta name="hostname" content="github-fe116-cp1-prd.iad.github.net">
    <meta name="ruby" content="ruby 1.9.3p194-tcs-github-tcmalloc (e1c0c3f392) [x86_64-linux]">
    <link rel="assets" href="https://github.global.ssl.fastly.net/">
    <link rel="conduit-xhr" href="https://ghconduit.com:25035/">
    <link rel="xhr-socket" href="/_sockets" />
    


    <meta name="msapplication-TileImage" content="/windows-tile.png" />
    <meta name="msapplication-TileColor" content="#ffffff" />
    <meta name="selected-link" value="repo_source" data-pjax-transient />
    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="BC2C2A24:043C:588D84E:52AE2964" name="octolytics-dimension-request_id" /><meta content="6099783" name="octolytics-actor-id" /><meta content="aramemhoh" name="octolytics-actor-login" /><meta content="a6b8c6a2757777d06c9f89b3153bffc484666352a75433611852decaeadd32a3" name="octolytics-actor-hash" />
    

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="3UfDAC3Fkqa6o0Af2DsYrXTaJMD4dFROnm+uLilzqww=" name="csrf-token" />

    <link href="https://github.global.ssl.fastly.net/assets/github-d1cff5b8c7ef78cf661f85dbf94ce8bbb19958b0.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://github.global.ssl.fastly.net/assets/github2-739ae94074bd58ea5f487331d9a79836678e5db7.css" media="all" rel="stylesheet" type="text/css" />
    

    

      <script src="https://github.global.ssl.fastly.net/assets/frameworks-5970f5a0a3dcc441d5f7ff74326ffd59bbe9388e.js" type="text/javascript"></script>
      <script src="https://github.global.ssl.fastly.net/assets/github-44188494b76ae62bb834f936309193eec69b2810.js" type="text/javascript"></script>
      
      <meta http-equiv="x-pjax-version" content="bcbb17d156959774ecc72462ebb77033">

        <link data-pjax-transient rel='permalink' href='/dontsovcmc/AHW/blob/6254c34b9ee0dd6a761eafc471548e4c2ae68c6c/LCD_TEMP/LCD_TEMP.ino'>
  <meta property="og:title" content="AHW"/>
  <meta property="og:type" content="githubog:gitrepository"/>
  <meta property="og:url" content="https://github.com/dontsovcmc/AHW"/>
  <meta property="og:image" content="https://github.global.ssl.fastly.net/images/gravatars/gravatar-user-420.png"/>
  <meta property="og:site_name" content="GitHub"/>
  <meta property="og:description" content="Contribute to AHW development by creating an account on GitHub."/>

  <meta name="description" content="Contribute to AHW development by creating an account on GitHub." />

  <meta content="6192152" name="octolytics-dimension-user_id" /><meta content="dontsovcmc" name="octolytics-dimension-user_login" /><meta content="15210012" name="octolytics-dimension-repository_id" /><meta content="dontsovcmc/AHW" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="true" name="octolytics-dimension-repository_is_fork" /><meta content="14908766" name="octolytics-dimension-repository_parent_id" /><meta content="aramemhoh/AHW" name="octolytics-dimension-repository_parent_nwo" /><meta content="14908766" name="octolytics-dimension-repository_network_root_id" /><meta content="aramemhoh/AHW" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/dontsovcmc/AHW/commits/master.atom" rel="alternate" title="Recent Commits to AHW:master" type="application/atom+xml" />

  </head>


  <body class="logged_in  env-production windows vis-public fork page-blob">
    <div class="wrapper">
      
      
      
      


      <div class="header header-logged-in true">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/">
  <span class="mega-octicon octicon-mark-github"></span>
</a>

    
    <a href="/notifications" class="notification-indicator tooltipped downwards" data-gotokey="n" title="You have no unread notifications">
        <span class="mail-status all-read"></span>
</a>

      <div class="command-bar js-command-bar  in-repository">
          <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">

<input type="text" data-hotkey="/ s" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    
    data-username="aramemhoh"
      data-repo="dontsovcmc/AHW"
      data-branch="master"
      data-sha="d50423ba24b861f433b02a45bb2b37f95afb466a"
  >

    <input type="hidden" name="nwo" value="dontsovcmc/AHW" />

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item js-this-repository-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked" />
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item js-all-repositories-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global" />
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="octicon help tooltipped downwards" title="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

</form>
        <ul class="top-nav">
          <li class="explore"><a href="/explore">Explore</a></li>
            <li><a href="https://gist.github.com">Gist</a></li>
            <li><a href="/blog">Blog</a></li>
          <li><a href="https://help.github.com">Help</a></li>
        </ul>
      </div>

    


  <ul id="user-links">
    <li>
      <a href="/aramemhoh" class="name">
        <img height="20" src="https://1.gravatar.com/avatar/29c237af95f3ca8538e9f94c6c666242?d=https%3A%2F%2Fidenticons.github.com%2F69e2d17d6a085adcd117e160d52bd1c3.png&amp;r=x&amp;s=140" width="20" /> aramemhoh
      </a>
    </li>

      <li>
        <a href="/new" id="new_repo" class="tooltipped downwards" title="Create a new repo" aria-label="Create a new repo">
          <span class="octicon octicon-repo-create"></span>
        </a>
      </li>

      <li>
        <a href="/settings/profile" id="account_settings"
          class="tooltipped downwards"
          aria-label="Account settings "
          title="Account settings ">
          <span class="octicon octicon-tools"></span>
        </a>
      </li>
      <li>
        <a class="tooltipped downwards" href="/logout" data-method="post" id="logout" title="Sign out" aria-label="Sign out">
          <span class="octicon octicon-log-out"></span>
        </a>
      </li>

  </ul>

<div class="js-new-dropdown-contents hidden">
  

<ul class="dropdown-menu">
  <li>
    <a href="/new"><span class="octicon octicon-repo-create"></span> New repository</a>
  </li>
  <li>
    <a href="/organizations/new"><span class="octicon octicon-organization"></span> New organization</a>
  </li>



</ul>

</div>


    
  </div>
</div>

      

      




          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        

<ul class="pagehead-actions">

    <li class="subscription">
      <form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="3UfDAC3Fkqa6o0Af2DsYrXTaJMD4dFROnm+uLilzqww=" /></div>  <input id="repository_id" name="repository_id" type="hidden" value="15210012" />

    <div class="select-menu js-menu-container js-select-menu">
      <a class="social-count js-social-count" href="/dontsovcmc/AHW/watchers">
        1
      </a>
      <span class="minibutton select-menu-button with-count js-menu-target" role="button" tabindex="0">
        <span class="js-select-button">
          <span class="octicon octicon-eye-watch"></span>
          Watch
        </span>
      </span>

      <div class="select-menu-modal-holder">
        <div class="select-menu-modal subscription-menu-modal js-menu-content">
          <div class="select-menu-header">
            <span class="select-menu-title">Notification status</span>
            <span class="octicon octicon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-list js-navigation-container" role="menu">

            <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input checked="checked" id="do_included" name="do" type="radio" value="included" />
                <h4>Not watching</h4>
                <span class="description">You only receive notifications for conversations in which you participate or are @mentioned.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-watch"></span>
                  Watch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_subscribed" name="do" type="radio" value="subscribed" />
                <h4>Watching</h4>
                <span class="description">You receive notifications for all conversations in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-unwatch"></span>
                  Unwatch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_ignore" name="do" type="radio" value="ignore" />
                <h4>Ignoring</h4>
                <span class="description">You do not receive any notifications for conversations in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-mute"></span>
                  Stop ignoring
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

</form>
    </li>

  <li>
  

  <div class="js-toggler-container js-social-container starring-container ">
    <a href="/dontsovcmc/AHW/unstar"
      class="minibutton with-count js-toggler-target star-button starred upwards"
      title="Unstar this repository" data-remote="true" data-method="post" rel="nofollow">
      <span class="octicon octicon-star-delete"></span><span class="text">Unstar</span>
    </a>

    <a href="/dontsovcmc/AHW/star"
      class="minibutton with-count js-toggler-target star-button unstarred upwards"
      title="Star this repository" data-remote="true" data-method="post" rel="nofollow">
      <span class="octicon octicon-star"></span><span class="text">Star</span>
    </a>

      <a class="social-count js-social-count" href="/dontsovcmc/AHW/stargazers">
        0
      </a>
  </div>

  </li>


        <li>
          <a href="/dontsovcmc/AHW/fork" class="minibutton with-count js-toggler-target fork-button lighter upwards" title="Fork this repo" rel="facebox nofollow">
            <span class="octicon octicon-git-branch-create"></span><span class="text">Fork</span>
          </a>
          <a href="/dontsovcmc/AHW/network" class="social-count">1</a>
        </li>


</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="repo-label"><span>public</span></span>
          <span class="mega-octicon octicon-repo-forked"></span>
          <span class="author">
            <a href="/dontsovcmc" class="url fn" itemprop="url" rel="author"><span itemprop="title">dontsovcmc</span></a>
          </span>
          <span class="repohead-name-divider">/</span>
          <strong><a href="/dontsovcmc/AHW" class="js-current-repository js-repo-home-link">AHW</a></strong>

          <span class="page-context-loader">
            <img alt="Octocat-spinner-32" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
          </span>

            <span class="fork-flag">
              <span class="text">forked from <a href="/aramemhoh/AHW">aramemhoh/AHW</a></span>
            </span>
        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">

      <div class="repository-with-sidebar repo-container  ">

        <div class="repository-sidebar">
            

<div class="sunken-menu vertical-right repo-nav js-repo-nav js-repository-container-pjax js-octicon-loaders">
  <div class="sunken-menu-contents">
    <ul class="sunken-menu-group">
      <li class="tooltipped leftwards" title="Code">
        <a href="/dontsovcmc/AHW" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-gotokey="c" data-pjax="true" data-selected-links="repo_source repo_downloads repo_commits repo_tags repo_branches /dontsovcmc/AHW">
          <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


      <li class="tooltipped leftwards" title="Pull Requests">
        <a href="/dontsovcmc/AHW/pulls" aria-label="Pull Requests" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-gotokey="p" data-selected-links="repo_pulls /dontsovcmc/AHW/pulls">
            <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull Requests</span>
            <span class='counter'>0</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


        <li class="tooltipped leftwards" title="Wiki">
          <a href="/dontsovcmc/AHW/wiki" aria-label="Wiki" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_wiki /dontsovcmc/AHW/wiki">
            <span class="octicon octicon-book"></span> <span class="full-word">Wiki</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>
    </ul>
    <div class="sunken-menu-separator"></div>
    <ul class="sunken-menu-group">

      <li class="tooltipped leftwards" title="Pulse">
        <a href="/dontsovcmc/AHW/pulse" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="pulse /dontsovcmc/AHW/pulse">
          <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped leftwards" title="Graphs">
        <a href="/dontsovcmc/AHW/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_graphs repo_contributors /dontsovcmc/AHW/graphs">
          <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped leftwards" title="Network">
        <a href="/dontsovcmc/AHW/network" aria-label="Network" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-selected-links="repo_network /dontsovcmc/AHW/network">
          <span class="octicon octicon-git-branch"></span> <span class="full-word">Network</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>
    </ul>


  </div>
</div>

            <div class="only-with-full-nav">
              

  

<div class="clone-url open"
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=clone">
  <h3><strong>HTTPS</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/dontsovcmc/AHW.git" readonly="readonly">

    <span class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="https://github.com/dontsovcmc/AHW.git" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="ssh"
  data-url="/users/set_protocol?protocol_selector=ssh&amp;protocol_type=clone">
  <h3><strong>SSH</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="git@github.com:dontsovcmc/AHW.git" readonly="readonly">

    <span class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="git@github.com:dontsovcmc/AHW.git" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=clone">
  <h3><strong>Subversion</strong> checkout URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/dontsovcmc/AHW" readonly="readonly">

    <span class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="https://github.com/dontsovcmc/AHW" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>


<p class="clone-options">You can clone with
      <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a>,
      <a href="#" class="js-clone-selector" data-protocol="ssh">SSH</a>,
      or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <span class="octicon help tooltipped upwards" title="Get help on which URL is right for you.">
    <a href="https://help.github.com/articles/which-remote-url-should-i-use">
    <span class="octicon octicon-question"></span>
    </a>
  </span>
</p>


  <a href="github-windows://openRepo/https://github.com/dontsovcmc/AHW" class="minibutton sidebar-button">
    <span class="octicon octicon-device-desktop"></span>
    Clone in Desktop
  </a>

              <a href="/dontsovcmc/AHW/archive/master.zip"
                 class="minibutton sidebar-button"
                 title="Download this repository as a zip file"
                 rel="nofollow">
                <span class="octicon octicon-cloud-download"></span>
                Download ZIP
              </a>
            </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:ac86b9a8c1da1a239c0556e60a653074 -->

<p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

<a href="/dontsovcmc/AHW/find/master" data-pjax data-hotkey="t" class="js-show-file-finder" style="display:none">Show File Finder</a>

<div class="file-navigation">
  

<div class="select-menu js-menu-container js-select-menu" >
  <span class="minibutton select-menu-button js-menu-target" data-hotkey="w"
    data-master-branch="master"
    data-ref="master"
    role="button" aria-label="Switch branches or tags" tabindex="0">
    <span class="octicon octicon-git-branch"></span>
    <i>branch:</i>
    <span class="js-select-button">master</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax>

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-remove-close js-menu-close"></span>
      </div> <!-- /.select-menu-header -->

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div><!-- /.select-menu-tabs -->
      </div><!-- /.select-menu-filters -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item selected">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/dontsovcmc/AHW/blob/master/LCD_TEMP/LCD_TEMP.ino"
                 data-name="master"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="master">master</a>
            </div> <!-- /.select-menu-item -->
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

    </div> <!-- /.select-menu-modal -->
  </div> <!-- /.select-menu-modal-holder -->
</div> <!-- /.select-menu -->

  <div class="breadcrumb">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/dontsovcmc/AHW" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">AHW</span></a></span></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/dontsovcmc/AHW/tree/master/LCD_TEMP" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">LCD_TEMP</span></a></span><span class="separator"> / </span><strong class="final-path">LCD_TEMP.ino</strong> <span class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="LCD_TEMP/LCD_TEMP.ino" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>



  <div class="commit file-history-tease">
    <img class="main-avatar" height="24" src="https://1.gravatar.com/avatar/ee4aed2802bdb5c365e2d0361f589881?d=https%3A%2F%2Fidenticons.github.com%2Fb78d9a4a91df466eeed85b3644682416.png&amp;r=x&amp;s=140" width="24" />
    <span class="author"><a href="/dontsovcmc" rel="author">dontsovcmc</a></span>
    <time class="js-relative-date" datetime="2013-12-15T12:17:11-08:00" title="2013-12-15 12:17:11">December 15, 2013</time>
    <div class="commit-title">
        <a href="/dontsovcmc/AHW/commit/6254c34b9ee0dd6a761eafc471548e4c2ae68c6c" class="message" data-pjax="true" title="CMC temp">CMC temp</a>
    </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>1</strong> contributor</a></p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
          <li class="facebox-user-list-item">
            <img height="24" src="https://1.gravatar.com/avatar/ee4aed2802bdb5c365e2d0361f589881?d=https%3A%2F%2Fidenticons.github.com%2Fb78d9a4a91df466eeed85b3644682416.png&amp;r=x&amp;s=140" width="24" />
            <a href="/dontsovcmc">dontsovcmc</a>
          </li>
      </ul>
    </div>
  </div>

<div id="files" class="bubble">
  <div class="file">
    <div class="meta">
      <div class="info">
        <span class="icon"><b class="octicon octicon-file-text"></b></span>
        <span class="mode" title="File Mode">file</span>
          <span>125 lines (106 sloc)</span>
        <span>3.338 kb</span>
      </div>
      <div class="actions">
        <div class="button-group">
            <a class="minibutton tooltipped leftwards"
               href="github-windows://openRepo/https://github.com/dontsovcmc/AHW?branch=master&amp;filepath=LCD_TEMP%2FLCD_TEMP.ino" title="Open this file in GitHub for Windows">
                <span class="octicon octicon-device-desktop"></span> Open
            </a>
                <a class="minibutton tooltipped upwards"
                   title="Clicking this button will automatically fork this project so you can edit the file"
                   href="/dontsovcmc/AHW/edit/master/LCD_TEMP/LCD_TEMP.ino"
                   data-method="post" rel="nofollow">Edit</a>
          <a href="/dontsovcmc/AHW/raw/master/LCD_TEMP/LCD_TEMP.ino" class="button minibutton " id="raw-url">Raw</a>
            <a href="/dontsovcmc/AHW/blame/master/LCD_TEMP/LCD_TEMP.ino" class="button minibutton ">Blame</a>
          <a href="/dontsovcmc/AHW/commits/master/LCD_TEMP/LCD_TEMP.ino" class="button minibutton " rel="nofollow">History</a>
        </div><!-- /.button-group -->
          <a class="minibutton danger empty-icon tooltipped downwards"
             href="/dontsovcmc/AHW/delete/master/LCD_TEMP/LCD_TEMP.ino"
             title="Fork this project and delete file"
             data-method="post" data-test-id="delete-blob-file" rel="nofollow">
          Delete
        </a>
      </div><!-- /.actions -->

    </div>
        <div class="blob-wrapper data type-arduino js-blob-data">
        <table class="file-code file-diff">
          <tr class="file-code-line">
            <td class="blob-line-nums">
              <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>

            </td>
            <td class="blob-line-code">
                    <div class="code-body highlight"><pre><div class='line' id='LC1'><br/></div><div class='line' id='LC2'><span class="cp">#include &quot;U8glib.h&quot;</span></div><div class='line' id='LC3'><span class="cp">#include &lt;OneWire.h&gt;</span></div><div class='line' id='LC4'><span class="cp">#include &lt;DallasTemperature.h&gt;</span></div><div class='line' id='LC5'><br/></div><div class='line' id='LC6'><span class="cp">#define SCK_PIN  8</span></div><div class='line' id='LC7'><span class="cp">#define MOSI_PIN 7</span></div><div class='line' id='LC8'><span class="cp">#define CS_PIN   6</span></div><div class='line' id='LC9'><br/></div><div class='line' id='LC10'><span class="cp">#define TEMP_PIN 10</span></div><div class='line' id='LC11'><br/></div><div class='line' id='LC12'><span class="n">U8GLIB_ST7920_128X64_4X</span> <span class="nf">u8g</span><span class="p">(</span><span class="n">SCK_PIN</span><span class="p">,</span> <span class="n">MOSI_PIN</span><span class="p">,</span> <span class="n">CS_PIN</span><span class="p">);</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// SPI Com: SCK = en = 18, MOSI = rw = 16, CS = di = 17</span></div><div class='line' id='LC13'><br/></div><div class='line' id='LC14'><span class="n">OneWire</span>  <span class="nf">oneWire</span><span class="p">(</span><span class="n">TEMP_PIN</span><span class="p">);</span>  <span class="c1">// on pin 10 (a 4.7K resistor is necessary)</span></div><div class='line' id='LC15'><span class="n">DallasTemperature</span> <span class="nf">sensors</span><span class="p">(</span><span class="o">&amp;</span><span class="n">oneWire</span><span class="p">);</span></div><div class='line' id='LC16'><span class="n">DeviceAddress</span> <span class="n">insideThermometer</span> <span class="o">=</span> <span class="p">{</span> <span class="mh">0x28</span><span class="p">,</span> <span class="mh">0x41</span><span class="p">,</span> <span class="mh">0xAC</span><span class="p">,</span> <span class="mh">0x23</span><span class="p">,</span> <span class="mh">0x05</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x83</span> <span class="p">};</span></div><div class='line' id='LC17'><br/></div><div class='line' id='LC18'><span class="k">const</span> <span class="kt">uint8_t</span> <span class="n">rook_bitmap</span><span class="p">[]</span> <span class="n">U8G_PROGMEM</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC19'><span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x7</span><span class="p">,</span> <span class="mh">0x81</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> </div><div class='line' id='LC20'><span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x3F</span><span class="p">,</span> <span class="mh">0x8F</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xF0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> </div><div class='line' id='LC21'><span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x7F</span><span class="p">,</span> <span class="mh">0x3F</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xF8</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> </div><div class='line' id='LC22'><span class="mh">0x0</span><span class="p">,</span> <span class="mh">0xFE</span><span class="p">,</span> <span class="mh">0x7F</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xFE</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> </div><div class='line' id='LC23'><span class="mh">0x1</span><span class="p">,</span> <span class="mh">0xFC</span><span class="p">,</span> <span class="mh">0xFE</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x7F</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> </div><div class='line' id='LC24'><span class="mh">0x3</span><span class="p">,</span> <span class="mh">0xF1</span><span class="p">,</span> <span class="mh">0xF0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x1F</span><span class="p">,</span> <span class="mh">0x80</span><span class="p">,</span> </div><div class='line' id='LC25'><span class="mh">0x7</span><span class="p">,</span> <span class="mh">0xC1</span><span class="p">,</span> <span class="mh">0xC0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x7</span><span class="p">,</span> <span class="mh">0x80</span><span class="p">,</span> </div><div class='line' id='LC26'><span class="mh">0xF</span><span class="p">,</span> <span class="mh">0x3</span><span class="p">,</span> <span class="mh">0x80</span><span class="p">,</span> <span class="mh">0x7C</span><span class="p">,</span> <span class="mh">0x1</span><span class="p">,</span> <span class="mh">0xC0</span><span class="p">,</span> </div><div class='line' id='LC27'><span class="mh">0x1E</span><span class="p">,</span> <span class="mh">0x7</span><span class="p">,</span> <span class="mh">0x3</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xC0</span><span class="p">,</span> <span class="mh">0xE0</span><span class="p">,</span> </div><div class='line' id='LC28'><span class="mh">0x1C</span><span class="p">,</span> <span class="mh">0x7</span><span class="p">,</span> <span class="mh">0x1F</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xF0</span><span class="p">,</span> <span class="mh">0xE0</span><span class="p">,</span> </div><div class='line' id='LC29'><span class="mh">0x38</span><span class="p">,</span> <span class="mh">0xCE</span><span class="p">,</span> <span class="mh">0x3F</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xFC</span><span class="p">,</span> <span class="mh">0x70</span><span class="p">,</span> </div><div class='line' id='LC30'><span class="mh">0x38</span><span class="p">,</span> <span class="mh">0xEC</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0x1</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0x30</span><span class="p">,</span> </div><div class='line' id='LC31'><span class="mh">0x71</span><span class="p">,</span> <span class="mh">0xE8</span><span class="p">,</span> <span class="mh">0xF8</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x3F</span><span class="p">,</span> <span class="mh">0x30</span><span class="p">,</span> </div><div class='line' id='LC32'><span class="mh">0x63</span><span class="p">,</span> <span class="mh">0xC1</span><span class="p">,</span> <span class="mh">0xE0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0xF</span><span class="p">,</span> <span class="mh">0x90</span><span class="p">,</span> </div><div class='line' id='LC33'><span class="mh">0x67</span><span class="p">,</span> <span class="mh">0xC3</span><span class="p">,</span> <span class="mh">0xC0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x3</span><span class="p">,</span> <span class="mh">0xC0</span><span class="p">,</span> </div><div class='line' id='LC34'><span class="mh">0xEF</span><span class="p">,</span> <span class="mh">0x83</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0x81</span><span class="p">,</span> <span class="mh">0xE0</span><span class="p">,</span> </div><div class='line' id='LC35'><span class="mh">0xCF</span><span class="p">,</span> <span class="mh">0x7</span><span class="p">,</span> <span class="mh">0x7</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xF0</span><span class="p">,</span> <span class="mh">0xE0</span><span class="p">,</span> </div><div class='line' id='LC36'><span class="mh">0xDE</span><span class="p">,</span> <span class="mh">0x6</span><span class="p">,</span> <span class="mh">0x1F</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xFC</span><span class="p">,</span> <span class="mh">0xF0</span><span class="p">,</span> </div><div class='line' id='LC37'><span class="mh">0xDC</span><span class="p">,</span> <span class="mh">0x8C</span><span class="p">,</span> <span class="mh">0x7F</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0x70</span><span class="p">,</span> </div><div class='line' id='LC38'><span class="mh">0xD9</span><span class="p">,</span> <span class="mh">0xCC</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0x30</span><span class="p">,</span> </div><div class='line' id='LC39'><span class="mh">0xC3</span><span class="p">,</span> <span class="mh">0xC0</span><span class="p">,</span> <span class="mh">0xFC</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x3F</span><span class="p">,</span> <span class="mh">0x90</span><span class="p">,</span> </div><div class='line' id='LC40'><span class="mh">0xE7</span><span class="p">,</span> <span class="mh">0xC1</span><span class="p">,</span> <span class="mh">0xF0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0xF</span><span class="p">,</span> <span class="mh">0xC0</span><span class="p">,</span> </div><div class='line' id='LC41'><span class="mh">0xEF</span><span class="p">,</span> <span class="mh">0x83</span><span class="p">,</span> <span class="mh">0xE0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x3</span><span class="p">,</span> <span class="mh">0xC0</span><span class="p">,</span> </div><div class='line' id='LC42'><span class="mh">0xEF</span><span class="p">,</span> <span class="mh">0x3</span><span class="p">,</span> <span class="mh">0xCF</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x81</span><span class="p">,</span> <span class="mh">0xE0</span><span class="p">,</span> </div><div class='line' id='LC43'><span class="mh">0xE6</span><span class="p">,</span> <span class="mh">0x7</span><span class="p">,</span> <span class="mh">0x9F</span><span class="p">,</span> <span class="mh">0x80</span><span class="p">,</span> <span class="mh">0x80</span><span class="p">,</span> <span class="mh">0xF0</span><span class="p">,</span> </div><div class='line' id='LC44'><span class="mh">0xF4</span><span class="p">,</span> <span class="mh">0x7</span><span class="p">,</span> <span class="mh">0x1F</span><span class="p">,</span> <span class="mh">0xC1</span><span class="p">,</span> <span class="mh">0x80</span><span class="p">,</span> <span class="mh">0xF0</span><span class="p">,</span> </div><div class='line' id='LC45'><span class="mh">0x78</span><span class="p">,</span> <span class="mh">0x7</span><span class="p">,</span> <span class="mh">0x1F</span><span class="p">,</span> <span class="mh">0xC3</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x70</span><span class="p">,</span> </div><div class='line' id='LC46'><span class="mh">0x78</span><span class="p">,</span> <span class="mh">0xE</span><span class="p">,</span> <span class="mh">0x1F</span><span class="p">,</span> <span class="mh">0xC3</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x78</span><span class="p">,</span> </div><div class='line' id='LC47'><span class="mh">0x7C</span><span class="p">,</span> <span class="mh">0xC</span><span class="p">,</span> <span class="mh">0x1F</span><span class="p">,</span> <span class="mh">0x87</span><span class="p">,</span> <span class="mh">0x1</span><span class="p">,</span> <span class="mh">0xB8</span><span class="p">,</span> </div><div class='line' id='LC48'><span class="mh">0x3E</span><span class="p">,</span> <span class="mh">0xC</span><span class="p">,</span> <span class="mh">0xF</span><span class="p">,</span> <span class="mh">0x8F</span><span class="p">,</span> <span class="mh">0x3</span><span class="p">,</span> <span class="mh">0xB8</span><span class="p">,</span> </div><div class='line' id='LC49'><span class="mh">0x3F</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x7</span><span class="p">,</span> <span class="mh">0x3F</span><span class="p">,</span> <span class="mh">0xF</span><span class="p">,</span> <span class="mh">0xB8</span><span class="p">,</span> </div><div class='line' id='LC50'><span class="mh">0x1F</span><span class="p">,</span> <span class="mh">0x80</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x7E</span><span class="p">,</span> <span class="mh">0x1F</span><span class="p">,</span> <span class="mh">0x18</span><span class="p">,</span> </div><div class='line' id='LC51'><span class="mh">0x4F</span><span class="p">,</span> <span class="mh">0xE0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0xFC</span><span class="p">,</span> <span class="mh">0x1F</span><span class="p">,</span> <span class="mh">0x18</span><span class="p">,</span> </div><div class='line' id='LC52'><span class="mh">0x67</span><span class="p">,</span> <span class="mh">0xFE</span><span class="p">,</span> <span class="mh">0x7</span><span class="p">,</span> <span class="mh">0xF8</span><span class="p">,</span> <span class="mh">0x9E</span><span class="p">,</span> <span class="mh">0xD8</span><span class="p">,</span> </div><div class='line' id='LC53'><span class="mh">0x73</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xF0</span><span class="p">,</span> <span class="mh">0x88</span><span class="p">,</span> <span class="mh">0xD8</span><span class="p">,</span> </div><div class='line' id='LC54'><span class="mh">0x38</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xE1</span><span class="p">,</span> <span class="mh">0x81</span><span class="p">,</span> <span class="mh">0xD8</span><span class="p">,</span> </div><div class='line' id='LC55'><span class="mh">0x3C</span><span class="p">,</span> <span class="mh">0x7F</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0x3</span><span class="p">,</span> <span class="mh">0x3</span><span class="p">,</span> <span class="mh">0x98</span><span class="p">,</span> </div><div class='line' id='LC56'><span class="mh">0x1E</span><span class="p">,</span> <span class="mh">0x7</span><span class="p">,</span> <span class="mh">0xFC</span><span class="p">,</span> <span class="mh">0x7</span><span class="p">,</span> <span class="mh">0xF</span><span class="p">,</span> <span class="mh">0xB0</span><span class="p">,</span> </div><div class='line' id='LC57'><span class="mh">0x1F</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0xF</span><span class="p">,</span> <span class="mh">0x1F</span><span class="p">,</span> <span class="mh">0x30</span><span class="p">,</span> </div><div class='line' id='LC58'><span class="mh">0xF</span><span class="p">,</span> <span class="mh">0x80</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x3E</span><span class="p">,</span> <span class="mh">0x1F</span><span class="p">,</span> <span class="mh">0x30</span><span class="p">,</span> </div><div class='line' id='LC59'><span class="mh">0x47</span><span class="p">,</span> <span class="mh">0xE0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0xFC</span><span class="p">,</span> <span class="mh">0x3E</span><span class="p">,</span> <span class="mh">0x60</span><span class="p">,</span> </div><div class='line' id='LC60'><span class="mh">0x63</span><span class="p">,</span> <span class="mh">0xFE</span><span class="p">,</span> <span class="mh">0x7</span><span class="p">,</span> <span class="mh">0xF8</span><span class="p">,</span> <span class="mh">0x9C</span><span class="p">,</span> <span class="mh">0x60</span><span class="p">,</span> </div><div class='line' id='LC61'><span class="mh">0x70</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xF0</span><span class="p">,</span> <span class="mh">0x98</span><span class="p">,</span> <span class="mh">0xE0</span><span class="p">,</span> </div><div class='line' id='LC62'><span class="mh">0x38</span><span class="p">,</span> <span class="mh">0x7F</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xC1</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0xC0</span><span class="p">,</span> </div><div class='line' id='LC63'><span class="mh">0x3C</span><span class="p">,</span> <span class="mh">0x1F</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0x3</span><span class="p">,</span> <span class="mh">0x1</span><span class="p">,</span> <span class="mh">0x80</span><span class="p">,</span> </div><div class='line' id='LC64'><span class="mh">0x1E</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0xF8</span><span class="p">,</span> <span class="mh">0x7</span><span class="p">,</span> <span class="mh">0x3</span><span class="p">,</span> <span class="mh">0x80</span><span class="p">,</span> </div><div class='line' id='LC65'><span class="mh">0x1F</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0xF</span><span class="p">,</span> <span class="mh">0xF</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> </div><div class='line' id='LC66'><span class="mh">0xF</span><span class="p">,</span> <span class="mh">0x80</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x3E</span><span class="p">,</span> <span class="mh">0x3F</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> </div><div class='line' id='LC67'><span class="mh">0x7</span><span class="p">,</span> <span class="mh">0xE0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0xFC</span><span class="p">,</span> <span class="mh">0xFE</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> </div><div class='line' id='LC68'><span class="mh">0x3</span><span class="p">,</span> <span class="mh">0xFC</span><span class="p">,</span> <span class="mh">0x3</span><span class="p">,</span> <span class="mh">0xF9</span><span class="p">,</span> <span class="mh">0xFC</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> </div><div class='line' id='LC69'><span class="mh">0x0</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xF3</span><span class="p">,</span> <span class="mh">0xF8</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> </div><div class='line' id='LC70'><span class="mh">0x0</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0xE7</span><span class="p">,</span> <span class="mh">0xE0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> </div><div class='line' id='LC71'><span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x1F</span><span class="p">,</span> <span class="mh">0xFF</span><span class="p">,</span> <span class="mh">0x1F</span><span class="p">,</span> <span class="mh">0x80</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> </div><div class='line' id='LC72'><span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x3</span><span class="p">,</span> <span class="mh">0xFC</span><span class="p">,</span> <span class="mh">0x1E</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x0</span></div><div class='line' id='LC73'><span class="p">};</span></div><div class='line' id='LC74'><br/></div><div class='line' id='LC75'><br/></div><div class='line' id='LC76'><span class="cp">#define BUF_LEN 6</span></div><div class='line' id='LC77'><span class="c1">//only for DS18B20</span></div><div class='line' id='LC78'><span class="n">String</span> <span class="nf">getTemp</span><span class="p">()</span></div><div class='line' id='LC79'><span class="p">{</span></div><div class='line' id='LC80'>&nbsp;&nbsp;&nbsp;<span class="kt">char</span> <span class="n">tempBuf</span><span class="p">[</span><span class="n">BUF_LEN</span><span class="p">];</span></div><div class='line' id='LC81'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">sensors</span><span class="p">.</span><span class="n">getAddress</span><span class="p">(</span><span class="n">insideThermometer</span><span class="p">,</span> <span class="mi">0</span><span class="p">))</span></div><div class='line' id='LC82'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">String</span><span class="p">(</span><span class="s">&quot;fail&quot;</span><span class="p">);</span></div><div class='line' id='LC83'>&nbsp;&nbsp;<span class="n">sensors</span><span class="p">.</span><span class="n">requestTemperatures</span><span class="p">();</span></div><div class='line' id='LC84'>&nbsp;&nbsp;<span class="kt">float</span> <span class="n">t</span> <span class="o">=</span> <span class="n">sensors</span><span class="p">.</span><span class="n">getTempC</span><span class="p">(</span><span class="n">insideThermometer</span><span class="p">);</span></div><div class='line' id='LC85'>&nbsp;&nbsp;<span class="n">dtostrf</span><span class="p">(</span><span class="n">t</span><span class="p">,</span> <span class="n">BUF_LEN</span><span class="o">-</span><span class="mi">1</span><span class="p">,</span> <span class="mi">1</span><span class="p">,</span> <span class="n">tempBuf</span><span class="p">);</span></div><div class='line' id='LC86'>&nbsp;&nbsp;<span class="n">String</span> <span class="n">str</span><span class="p">;</span></div><div class='line' id='LC87'>&nbsp;&nbsp;<span class="c1">//if (t &gt; 0)</span></div><div class='line' id='LC88'>&nbsp;&nbsp;<span class="c1">//  str = &quot;+&quot;;</span></div><div class='line' id='LC89'>&nbsp;&nbsp;<span class="n">str</span> <span class="o">=</span> <span class="n">tempBuf</span><span class="p">;</span></div><div class='line' id='LC90'>&nbsp;&nbsp;<span class="k">return</span> <span class="n">str</span><span class="p">;</span></div><div class='line' id='LC91'><span class="p">}</span></div><div class='line' id='LC92'><br/></div><div class='line' id='LC93'><span class="kt">char</span> <span class="n">tempBuf</span><span class="p">[</span><span class="n">BUF_LEN</span><span class="p">];</span></div><div class='line' id='LC94'><br/></div><div class='line' id='LC95'><span class="kt">void</span> <span class="nf">draw</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC96'>&nbsp;&nbsp;<span class="c1">// graphic commands to redraw the complete screen should be placed here  </span></div><div class='line' id='LC97'>&nbsp;&nbsp;<span class="c1">//u8g.setFont(u8g_font_unifont);</span></div><div class='line' id='LC98'>&nbsp;&nbsp;<span class="n">u8g</span><span class="p">.</span><span class="n">setFont</span><span class="p">(</span><span class="n">u8g_font_fub20</span><span class="p">);</span></div><div class='line' id='LC99'>&nbsp;&nbsp;</div><div class='line' id='LC100'>&nbsp;&nbsp;<span class="n">String</span> <span class="n">str</span> <span class="o">=</span> <span class="n">getTemp</span><span class="p">();</span></div><div class='line' id='LC101'>&nbsp;&nbsp;<span class="n">str</span><span class="p">.</span><span class="n">toCharArray</span><span class="p">(</span><span class="n">tempBuf</span><span class="p">,</span> <span class="n">BUF_LEN</span><span class="p">);</span></div><div class='line' id='LC102'>&nbsp;&nbsp;<span class="n">u8g</span><span class="p">.</span><span class="n">drawStr</span><span class="p">(</span> <span class="mi">54</span><span class="p">,</span> <span class="mi">26</span><span class="p">,</span> <span class="n">tempBuf</span><span class="p">);</span></div><div class='line' id='LC103'>&nbsp;&nbsp;</div><div class='line' id='LC104'>&nbsp;&nbsp;<span class="n">u8g</span><span class="p">.</span><span class="n">drawBitmapP</span><span class="p">(</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">6</span><span class="p">,</span> <span class="mi">54</span><span class="p">,</span> <span class="n">rook_bitmap</span><span class="p">);</span></div><div class='line' id='LC105'><span class="p">}</span></div><div class='line' id='LC106'><br/></div><div class='line' id='LC107'><span class="kt">void</span> <span class="nf">setup</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC108'>&nbsp;&nbsp;<span class="n">u8g</span><span class="p">.</span><span class="n">setColorIndex</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span> </div><div class='line' id='LC109'>&nbsp;&nbsp;<span class="n">sensors</span><span class="p">.</span><span class="n">begin</span><span class="p">();</span></div><div class='line' id='LC110'>&nbsp;&nbsp;</div><div class='line' id='LC111'>&nbsp;&nbsp;</div><div class='line' id='LC112'><span class="p">}</span></div><div class='line' id='LC113'><br/></div><div class='line' id='LC114'><span class="kt">void</span> <span class="nf">loop</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC115'>&nbsp;&nbsp;<span class="c1">// picture loop</span></div><div class='line' id='LC116'>&nbsp;&nbsp;<span class="n">u8g</span><span class="p">.</span><span class="n">firstPage</span><span class="p">();</span>  </div><div class='line' id='LC117'>&nbsp;&nbsp;<span class="k">do</span> <span class="p">{</span></div><div class='line' id='LC118'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">draw</span><span class="p">();</span></div><div class='line' id='LC119'>&nbsp;&nbsp;<span class="p">}</span> <span class="k">while</span><span class="p">(</span> <span class="n">u8g</span><span class="p">.</span><span class="n">nextPage</span><span class="p">()</span> <span class="p">);</span></div><div class='line' id='LC120'>&nbsp;&nbsp;</div><div class='line' id='LC121'>&nbsp;&nbsp;<span class="c1">// rebuild the picture after some delay</span></div><div class='line' id='LC122'>&nbsp;&nbsp;<span class="n">delay</span><span class="p">(</span><span class="mi">500</span><span class="p">);</span></div><div class='line' id='LC123'><span class="p">}</span></div><div class='line' id='LC124'><br/></div></pre></div>
            </td>
          </tr>
        </table>
  </div>

  </div>
</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" class="js-jump-to-line-form">
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="button">Go</button>
  </form>
</div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer">
    <ul class="site-footer-links right">
      <li><a href="https://status.github.com/">Status</a></li>
      <li><a href="http://developer.github.com">API</a></li>
      <li><a href="http://training.github.com">Training</a></li>
      <li><a href="http://shop.github.com">Shop</a></li>
      <li><a href="/blog">Blog</a></li>
      <li><a href="/about">About</a></li>

    </ul>

    <a href="/">
      <span class="mega-octicon octicon-mark-github"></span>
    </a>

    <ul class="site-footer-links">
      <li>&copy; 2013 <span title="0.07472s from github-fe116-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="/site/terms">Terms</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
        <li><a href="/contact">Contact</a></li>
    </ul>
  </div><!-- /.site-footer -->
</div><!-- /.container -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
          <div class="suggester-container">
              <div class="suggester fullscreen-suggester js-navigation-container" id="fullscreen_suggester"
                 data-url="/dontsovcmc/AHW/suggestions/commit">
              </div>
          </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped leftwards" title="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped leftwards"
      title="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-remove-close close ajax-error-dismiss"></a>
      Something went wrong with that request. Please try again.
    </div>

  </body>
</html>

