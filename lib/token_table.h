/*
 * Copyright (c) 2014 DeNA Co., Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the &quot;Software&quot;), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED &quot;AS IS&quot;, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

/* DO NOT EDIT! generated by tokens.pl */
h2o_token_t h2o__tokens[] = {
    { { H2O_STRLIT(":authority") }, 1 },
    { { H2O_STRLIT(":method") }, 2 },
    { { H2O_STRLIT(":path") }, 4 },
    { { H2O_STRLIT(":scheme") }, 6 },
    { { H2O_STRLIT(":status") }, 8 },
    { { H2O_STRLIT("accept") }, 19 },
    { { H2O_STRLIT("accept-charset") }, 15 },
    { { H2O_STRLIT("accept-encoding") }, 16 },
    { { H2O_STRLIT("accept-language") }, 17 },
    { { H2O_STRLIT("accept-ranges") }, 18 },
    { { H2O_STRLIT("access-control-allow-origin") }, 20 },
    { { H2O_STRLIT("age") }, 21 },
    { { H2O_STRLIT("allow") }, 22 },
    { { H2O_STRLIT("authorization") }, 23 },
    { { H2O_STRLIT("cache-control") }, 24 },
    { { H2O_STRLIT("connection") }, 0 },
    { { H2O_STRLIT("content-disposition") }, 25 },
    { { H2O_STRLIT("content-encoding") }, 26 },
    { { H2O_STRLIT("content-language") }, 27 },
    { { H2O_STRLIT("content-length") }, 28 },
    { { H2O_STRLIT("content-location") }, 29 },
    { { H2O_STRLIT("content-range") }, 30 },
    { { H2O_STRLIT("content-type") }, 31 },
    { { H2O_STRLIT("cookie") }, 32 },
    { { H2O_STRLIT("date") }, 33 },
    { { H2O_STRLIT("etag") }, 34 },
    { { H2O_STRLIT("expect") }, 35 },
    { { H2O_STRLIT("expires") }, 36 },
    { { H2O_STRLIT("from") }, 37 },
    { { H2O_STRLIT("host") }, 38 },
    { { H2O_STRLIT("http2-settings") }, 0 },
    { { H2O_STRLIT("if-match") }, 39 },
    { { H2O_STRLIT("if-modified-since") }, 40 },
    { { H2O_STRLIT("if-none-match") }, 41 },
    { { H2O_STRLIT("if-range") }, 42 },
    { { H2O_STRLIT("if-unmodified-since") }, 43 },
    { { H2O_STRLIT("last-modified") }, 44 },
    { { H2O_STRLIT("link") }, 45 },
    { { H2O_STRLIT("location") }, 46 },
    { { H2O_STRLIT("max-forwards") }, 47 },
    { { H2O_STRLIT("proxy-authenticate") }, 48 },
    { { H2O_STRLIT("proxy-authorization") }, 49 },
    { { H2O_STRLIT("range") }, 50 },
    { { H2O_STRLIT("referer") }, 51 },
    { { H2O_STRLIT("refresh") }, 52 },
    { { H2O_STRLIT("retry-after") }, 53 },
    { { H2O_STRLIT("server") }, 54 },
    { { H2O_STRLIT("set-cookie") }, 55 },
    { { H2O_STRLIT("strict-transport-security") }, 56 },
    { { H2O_STRLIT("transfer-encoding") }, 57 },
    { { H2O_STRLIT("upgrade") }, 0 },
    { { H2O_STRLIT("user-agent") }, 58 },
    { { H2O_STRLIT("vary") }, 59 },
    { { H2O_STRLIT("via") }, 60 },
    { { H2O_STRLIT("www-authenticate") }, 61 },
    { { H2O_STRLIT("x-reproxy-url") }, 0 }
};
size_t h2o__num_tokens = 56;

const h2o_token_t *h2o_lookup_token(const char *name, size_t len)
{
    switch (len) {
    case 3:
        switch (h2o_tolower(name[2])) {
        case 'a':
            if (h2o__lcstris_core(name, "vi", 2))
                return H2O_TOKEN_VIA;
            break;
        case 'e':
            if (h2o__lcstris_core(name, "ag", 2))
                return H2O_TOKEN_AGE;
            break;
        }
        break;
    case 4:
        switch (h2o_tolower(name[3])) {
        case 'e':
            if (h2o__lcstris_core(name, "dat", 3))
                return H2O_TOKEN_DATE;
            break;
        case 'g':
            if (h2o__lcstris_core(name, "eta", 3))
                return H2O_TOKEN_ETAG;
            break;
        case 'k':
            if (h2o__lcstris_core(name, "lin", 3))
                return H2O_TOKEN_LINK;
            break;
        case 'm':
            if (h2o__lcstris_core(name, "fro", 3))
                return H2O_TOKEN_FROM;
            break;
        case 't':
            if (h2o__lcstris_core(name, "hos", 3))
                return H2O_TOKEN_HOST;
            break;
        case 'y':
            if (h2o__lcstris_core(name, "var", 3))
                return H2O_TOKEN_VARY;
            break;
        }
        break;
    case 5:
        switch (h2o_tolower(name[4])) {
        case 'e':
            if (h2o__lcstris_core(name, "rang", 4))
                return H2O_TOKEN_RANGE;
            break;
        case 'h':
            if (h2o__lcstris_core(name, ":pat", 4))
                return H2O_TOKEN_PATH;
            break;
        case 'w':
            if (h2o__lcstris_core(name, "allo", 4))
                return H2O_TOKEN_ALLOW;
            break;
        }
        break;
    case 6:
        switch (h2o_tolower(name[5])) {
        case 'e':
            if (h2o__lcstris_core(name, "cooki", 5))
                return H2O_TOKEN_COOKIE;
            break;
        case 'r':
            if (h2o__lcstris_core(name, "serve", 5))
                return H2O_TOKEN_SERVER;
            break;
        case 't':
            if (h2o__lcstris_core(name, "accep", 5))
                return H2O_TOKEN_ACCEPT;
            if (h2o__lcstris_core(name, "expec", 5))
                return H2O_TOKEN_EXPECT;
            break;
        }
        break;
    case 7:
        switch (h2o_tolower(name[6])) {
        case 'd':
            if (h2o__lcstris_core(name, ":metho", 6))
                return H2O_TOKEN_METHOD;
            break;
        case 'e':
            if (h2o__lcstris_core(name, ":schem", 6))
                return H2O_TOKEN_SCHEME;
            if (h2o__lcstris_core(name, "upgrad", 6))
                return H2O_TOKEN_UPGRADE;
            break;
        case 'h':
            if (h2o__lcstris_core(name, "refres", 6))
                return H2O_TOKEN_REFRESH;
            break;
        case 'r':
            if (h2o__lcstris_core(name, "refere", 6))
                return H2O_TOKEN_REFERER;
            break;
        case 's':
            if (h2o__lcstris_core(name, ":statu", 6))
                return H2O_TOKEN_STATUS;
            if (h2o__lcstris_core(name, "expire", 6))
                return H2O_TOKEN_EXPIRES;
            break;
        }
        break;
    case 8:
        switch (h2o_tolower(name[7])) {
        case 'e':
            if (h2o__lcstris_core(name, "if-rang", 7))
                return H2O_TOKEN_IF_RANGE;
            break;
        case 'h':
            if (h2o__lcstris_core(name, "if-matc", 7))
                return H2O_TOKEN_IF_MATCH;
            break;
        case 'n':
            if (h2o__lcstris_core(name, "locatio", 7))
                return H2O_TOKEN_LOCATION;
            break;
        }
        break;
    case 10:
        switch (h2o_tolower(name[9])) {
        case 'e':
            if (h2o__lcstris_core(name, "set-cooki", 9))
                return H2O_TOKEN_SET_COOKIE;
            break;
        case 'n':
            if (h2o__lcstris_core(name, "connectio", 9))
                return H2O_TOKEN_CONNECTION;
            break;
        case 't':
            if (h2o__lcstris_core(name, "user-agen", 9))
                return H2O_TOKEN_USER_AGENT;
            break;
        case 'y':
            if (h2o__lcstris_core(name, ":authorit", 9))
                return H2O_TOKEN_AUTHORITY;
            break;
        }
        break;
    case 11:
        switch (h2o_tolower(name[10])) {
        case 'r':
            if (h2o__lcstris_core(name, "retry-afte", 10))
                return H2O_TOKEN_RETRY_AFTER;
            break;
        }
        break;
    case 12:
        switch (h2o_tolower(name[11])) {
        case 'e':
            if (h2o__lcstris_core(name, "content-typ", 11))
                return H2O_TOKEN_CONTENT_TYPE;
            break;
        case 's':
            if (h2o__lcstris_core(name, "max-forward", 11))
                return H2O_TOKEN_MAX_FORWARDS;
            break;
        }
        break;
    case 13:
        switch (h2o_tolower(name[12])) {
        case 'd':
            if (h2o__lcstris_core(name, "last-modifie", 12))
                return H2O_TOKEN_LAST_MODIFIED;
            break;
        case 'e':
            if (h2o__lcstris_core(name, "content-rang", 12))
                return H2O_TOKEN_CONTENT_RANGE;
            break;
        case 'h':
            if (h2o__lcstris_core(name, "if-none-matc", 12))
                return H2O_TOKEN_IF_NONE_MATCH;
            break;
        case 'l':
            if (h2o__lcstris_core(name, "cache-contro", 12))
                return H2O_TOKEN_CACHE_CONTROL;
            if (h2o__lcstris_core(name, "x-reproxy-ur", 12))
                return H2O_TOKEN_X_REPROXY_URL;
            break;
        case 'n':
            if (h2o__lcstris_core(name, "authorizatio", 12))
                return H2O_TOKEN_AUTHORIZATION;
            break;
        case 's':
            if (h2o__lcstris_core(name, "accept-range", 12))
                return H2O_TOKEN_ACCEPT_RANGES;
            break;
        }
        break;
    case 14:
        switch (h2o_tolower(name[13])) {
        case 'h':
            if (h2o__lcstris_core(name, "content-lengt", 13))
                return H2O_TOKEN_CONTENT_LENGTH;
            break;
        case 's':
            if (h2o__lcstris_core(name, "http2-setting", 13))
                return H2O_TOKEN_HTTP2_SETTINGS;
            break;
        case 't':
            if (h2o__lcstris_core(name, "accept-charse", 13))
                return H2O_TOKEN_ACCEPT_CHARSET;
            break;
        }
        break;
    case 15:
        switch (h2o_tolower(name[14])) {
        case 'e':
            if (h2o__lcstris_core(name, "accept-languag", 14))
                return H2O_TOKEN_ACCEPT_LANGUAGE;
            break;
        case 'g':
            if (h2o__lcstris_core(name, "accept-encodin", 14))
                return H2O_TOKEN_ACCEPT_ENCODING;
            break;
        }
        break;
    case 16:
        switch (h2o_tolower(name[15])) {
        case 'e':
            if (h2o__lcstris_core(name, "content-languag", 15))
                return H2O_TOKEN_CONTENT_LANGUAGE;
            if (h2o__lcstris_core(name, "www-authenticat", 15))
                return H2O_TOKEN_WWW_AUTHENTICATE;
            break;
        case 'g':
            if (h2o__lcstris_core(name, "content-encodin", 15))
                return H2O_TOKEN_CONTENT_ENCODING;
            break;
        case 'n':
            if (h2o__lcstris_core(name, "content-locatio", 15))
                return H2O_TOKEN_CONTENT_LOCATION;
            break;
        }
        break;
    case 17:
        switch (h2o_tolower(name[16])) {
        case 'e':
            if (h2o__lcstris_core(name, "if-modified-sinc", 16))
                return H2O_TOKEN_IF_MODIFIED_SINCE;
            break;
        case 'g':
            if (h2o__lcstris_core(name, "transfer-encodin", 16))
                return H2O_TOKEN_TRANSFER_ENCODING;
            break;
        }
        break;
    case 18:
        switch (h2o_tolower(name[17])) {
        case 'e':
            if (h2o__lcstris_core(name, "proxy-authenticat", 17))
                return H2O_TOKEN_PROXY_AUTHENTICATE;
            break;
        }
        break;
    case 19:
        switch (h2o_tolower(name[18])) {
        case 'e':
            if (h2o__lcstris_core(name, "if-unmodified-sinc", 18))
                return H2O_TOKEN_IF_UNMODIFIED_SINCE;
            break;
        case 'n':
            if (h2o__lcstris_core(name, "content-dispositio", 18))
                return H2O_TOKEN_CONTENT_DISPOSITION;
            if (h2o__lcstris_core(name, "proxy-authorizatio", 18))
                return H2O_TOKEN_PROXY_AUTHORIZATION;
            break;
        }
        break;
    case 25:
        switch (h2o_tolower(name[24])) {
        case 'y':
            if (h2o__lcstris_core(name, "strict-transport-securit", 24))
                return H2O_TOKEN_STRICT_TRANSPORT_SECURITY;
            break;
        }
        break;
    case 27:
        switch (h2o_tolower(name[26])) {
        case 'n':
            if (h2o__lcstris_core(name, "access-control-allow-origi", 26))
                return H2O_TOKEN_ACCESS_CONTROL_ALLOW_ORIGIN;
            break;
        }
        break;
    }

    return NULL;
}
