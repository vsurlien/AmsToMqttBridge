const char BOOT_CSS[] PROGMEM = R"=="==(
/* Ripped necessary style from bootstrap 4.4.1 to make the page look good without internet access. Meant to be overridden by CSS from CDN */
:root {
    --blue: #007bff;
    --indigo: #6610f2;
    --purple: #6f42c1;
    --pink: #e83e8c;
    --red: #dc3545;
    --orange: #fd7e14;
    --yellow: #ffc107;
    --green: #28a745;
    --teal: #20c997;
    --cyan: #17a2b8;
    --white: #fff;
    --gray: #6c757d;
    --gray-dark: #343a40;
    --primary: #007bff;
    --secondary: #6c757d;
    --success: #28a745;
    --info: #17a2b8;
    --warning: #ffc107;
    --danger: #dc3545;
    --light: #f8f9fa;
    --dark: #343a40;
    --breakpoint-xs: 0;
    --breakpoint-sm: 576px;
    --breakpoint-md: 768px;
    --breakpoint-lg: 992px;
    --breakpoint-xl: 1200px;
    --font-family-sans-serif: -apple-system,BlinkMacSystemFont,"Segoe UI",Roboto,"Helvetica Neue",Arial,"Noto Sans",sans-serif,"Apple Color Emoji","Segoe UI Emoji","Segoe UI Symbol","Noto Color Emoji";
    --font-family-monospace: SFMono-Regular,Menlo,Monaco,Consolas,"Liberation Mono","Courier New",monospace;
}
html {
    font-family: sans-serif;
    line-height: 1.15;
    -webkit-text-size-adjust: 100%;
    -webkit-tap-highlight-color: transparent;
    color: -internal-root-color;
}
body {
    display: block;
    margin: 8px;
    font-family: -apple-system,BlinkMacSystemFont,"Segoe UI",Roboto,"Helvetica Neue",Arial,"Noto Sans",sans-serif,"Apple Color Emoji","Segoe UI Emoji","Segoe UI Symbol","Noto Color Emoji";
    font-size: 1rem;
    font-weight: 400;
    line-height: 1.5;
    color: #212529;
    text-align: left;
    background-color: #fff;
}
.bg-white {
    background-color: #fff!important;
}
.bg-light {
    background-color: #f8f9fa!important;
}
.bg-purple {
    background-color: var(--purple);
}
.text-white-50 {
    color: rgba(255,255,255,.5)!important;
}
.mb-0, .my-0 {
    margin-bottom: 0!important;
}
.mb-2, .my-2 {
    margin-bottom: .5rem!important;
}
.mt-2, .my-2 {
    margin-top: .5rem!important;
}
.pb-2, .py-2 {
    padding-bottom: .5rem!important;
}
.p-3 {
    padding: 1rem!important;
}
.mb-3, .my-3 {
    margin-bottom: 1rem!important;
}
.mt-3, .my-3 {
    margin-top: 1rem!important;
}
.mb-4, .my-4 {
    margin-bottom: 1.5rem!important;
}
.shadow {
    box-shadow: 0 .5rem 1rem rgba(0,0,0,.15)!important;
}
.align-items-center {
    -ms-flex-align: center!important;
    align-items: center!important;
}
.border-bottom {
    border-bottom: 1px solid #dee2e6!important;
}.rounded {
    border-radius: .25rem!important;
}
div {
    display: block;
}
.container {
    width: 100%;
    padding-right: 15px;
    padding-left: 15px;
    margin-right: auto;
    margin-left: auto;
}
article, aside, figcaption, figure, footer, header, hgroup, main, nav, section {
    display: block;
}
main {
    display: block;
}
.text-white {
    color: #fff!important;
}
.text-right {
    text-align: right!important;
}
.text-center {
    text-align: center!important;
}
.h1, .h2, .h3, .h4, .h5, .h6, h1, h2, h3, h4, h5, h6 {
    margin-bottom: .5rem;
    font-weight: 500;
    line-height: 1.2;
}
h1, h2, h3, h4, h5, h6 {
    margin-top: 0;
    margin-bottom: .5rem;
}
.h6, h6 {
    font-size: 1rem;
}
.row {
    display: -ms-flexbox;
    display: flex;
    -ms-flex-wrap: wrap;
    flex-wrap: wrap;
    margin-right: -15px;
    margin-left: -15px;
}
.d-flex {
    display: -ms-flexbox!important;
    display: flex!important;
}
.col, .col-1, .col-10, .col-11, .col-12, .col-2, .col-3, .col-4, .col-5, .col-6, .col-7, .col-8, .col-9, .col-auto, .col-lg, .col-lg-1, .col-lg-10, .col-lg-11, .col-lg-12, .col-lg-2, .col-lg-3, .col-lg-4, .col-lg-5, .col-lg-6, .col-lg-7, .col-lg-8, .col-lg-9, .col-lg-auto, .col-md, .col-md-1, .col-md-10, .col-md-11, .col-md-12, .col-md-2, .col-md-3, .col-md-4, .col-md-5, .col-md-6, .col-md-7, .col-md-8, .col-md-9, .col-md-auto, .col-sm, .col-sm-1, .col-sm-10, .col-sm-11, .col-sm-12, .col-sm-2, .col-sm-3, .col-sm-4, .col-sm-5, .col-sm-6, .col-sm-7, .col-sm-8, .col-sm-9, .col-sm-auto, .col-xl, .col-xl-1, .col-xl-10, .col-xl-11, .col-xl-12, .col-xl-2, .col-xl-3, .col-xl-4, .col-xl-5, .col-xl-6, .col-xl-7, .col-xl-8, .col-xl-9, .col-xl-auto {
    position: relative;
    width: 100%;
    padding-right: 15px;
    padding-left: 15px;
}
.col-2 {
    -ms-flex: 0 0 16.666667%;
    flex: 0 0 16.666667%;
    max-width: 16.666667%;
}
.col-3 {
    -ms-flex: 0 0 25%;
    flex: 0 0 25%;
    max-width: 25%;
}
.col-4 {
    -ms-flex: 0 0 33.333333%;
    flex: 0 0 33.333333%;
    max-width: 33.333333%;
}
.col-5 {
    -ms-flex: 0 0 41.666667%;
    flex: 0 0 41.666667%;
    max-width: 41.666667%;
}
.col-6 {
    -ms-flex: 0 0 50%;
    flex: 0 0 50%;
    max-width: 50%;
}
.col-8 {
    -ms-flex: 0 0 66.666667%;
    flex: 0 0 66.666667%;
    max-width: 66.666667%;
}
.col-9 {
    -ms-flex: 0 0 75%;
    flex: 0 0 75%;
    max-width: 75%;
}
a {
    color: #007bff;
    text-decoration: none;
    background-color: transparent;
}
.btn {
    display: inline-block;
    font-weight: 400;
    color: #212529;
    text-align: center;
    vertical-align: middle;
    cursor: pointer;
    -webkit-user-select: none;
    -moz-user-select: none;
    -ms-user-select: none;
    user-select: none;
    background-color: transparent;
    border: 1px solid transparent;
    padding: .375rem .75rem;
    font-size: 1rem;
    line-height: 1.5;
    border-radius: .25rem;
    transition: color .15s ease-in-out,background-color .15s ease-in-out,border-color .15s ease-in-out,box-shadow .15s ease-in-out;
}
.btn-outline-secondary {
    color: #6c757d;
    border-color: #6c757d;
}
.btn-primary {
    color: #fff;
    background-color: #007bff;
    border-color: #007bff;
}
.form-group {
    margin-bottom: 1rem;
}
.form-control {
    display: block;
    width: 100%;
    height: calc(1.5em + .75rem + 2px);
    padding: .375rem .75rem;
    font-size: 1rem;
    font-weight: 400;
    line-height: 1.5;
    color: #495057;
    background-color: #fff;
    background-clip: padding-box;
    border: 1px solid #ced4da;
    border-radius: .25rem;
    transition: border-color .15s ease-in-out,box-shadow .15s ease-in-out;
}
input:not([type="image" i]) {
    box-sizing: border-box;
}
input {
    -webkit-writing-mode: horizontal-tb !important;
    text-rendering: auto;
    color: -internal-light-dark-color(black, white);
    letter-spacing: normal;
    word-spacing: normal;
    text-transform: none;
    text-indent: 0px;
    text-shadow: none;
    display: inline-block;
    text-align: start;
    -webkit-appearance: textfield;
    background-color: -internal-light-dark-color(white, black);
    -webkit-rtl-ordering: logical;
    cursor: text;
    margin: 0em;
    font: 400 13.3333px Arial;
    padding: 1px 0px;
    border-width: 2px;
    border-style: inset;
    border-color: initial;
    border-image: initial;
}
button, input {
    overflow: visible;
}
button, input, optgroup, select, textarea {
    margin: 0;
    font-family: inherit;
    font-size: inherit;
    line-height: inherit;
}
hr {
    margin-top: 1rem;
    margin-bottom: 1rem;
    border: 0;
    border-top: 1px solid rgba(0,0,0,.1);
    box-sizing: content-box;
    height: 0;
    overflow: visible;
}

@media (min-width: 576px) {
    .container, .container-sm {
        max-width: 540px;
    }
}
@media (min-width: 768px) {
    .container, .container-md, .container-sm {
        max-width: 720px;
    }
    .col-md-4 {
        -ms-flex: 0 0 33.333333%;
        flex: 0 0 33.333333%;
        max-width: 33.333333%;
    }
    .col-md-6 {
        -ms-flex: 0 0 50%;
        flex: 0 0 50%;
        max-width: 50%;
    }
}
@media (min-width: 992px) {
    .container, .container-lg, .container-md, .container-sm {
        max-width: 960px;
    }
    .col-lg-4 {
        -ms-flex: 0 0 33.333333%;
        flex: 0 0 33.333333%;
        max-width: 33.333333%;
    }
}
@media (min-width: 1200px) {
    .container, .container-lg, .container-md, .container-sm, .container-xl {
        max-width: 1140px;
    }
}

*, ::after, ::before {
    box-sizing: border-box;
}
*, ::after, ::before {
    box-sizing: border-box;
}
)=="==";
