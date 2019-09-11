/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This file was generated by pbtools.
 */

#ifndef BENCHMARKS_PROTO3_H
#define BENCHMARKS_PROTO3_H

#include "pbtools.h"

/**
 * Message benchmarks.proto3.GoogleMessage1SubMessage.
 */
struct benchmarks_proto3_google_message1_sub_message_repeated_t {
    int length;
    struct benchmarks_proto3_google_message1_sub_message_t **items_pp;
    struct benchmarks_proto3_google_message1_sub_message_t *head_p;
    struct benchmarks_proto3_google_message1_sub_message_t *tail_p;
};

struct benchmarks_proto3_google_message1_sub_message_t {
    struct pbtools_message_base_t base;
    int32_t field1;
    int32_t field2;
    int32_t field3;
    char *field15_p;
    bool field12;
    int64_t field13;
    int64_t field14;
    int32_t field16;
    int32_t field19;
    bool field20;
    bool field28;
    uint64_t field21;
    int32_t field22;
    bool field23;
    bool field206;
    uint32_t field203;
    int32_t field204;
    char *field205_p;
    uint64_t field207;
    uint64_t field300;
};

/**
 * Message benchmarks.proto3.GoogleMessage1.
 */
struct benchmarks_proto3_google_message1_repeated_t {
    int length;
    struct benchmarks_proto3_google_message1_t **items_pp;
    struct benchmarks_proto3_google_message1_t *head_p;
    struct benchmarks_proto3_google_message1_t *tail_p;
};

struct benchmarks_proto3_google_message1_t {
    struct pbtools_message_base_t base;
    char *field1_p;
    char *field9_p;
    char *field18_p;
    bool field80;
    bool field81;
    int32_t field2;
    int32_t field3;
    int32_t field280;
    int32_t field6;
    int64_t field22;
    char *field4_p;
    struct pbtools_repeated_uint64_t field5;
    bool field59;
    char *field7_p;
    int32_t field16;
    int32_t field130;
    bool field12;
    bool field17;
    bool field13;
    bool field14;
    int32_t field104;
    int32_t field100;
    int32_t field101;
    char *field102_p;
    char *field103_p;
    int32_t field29;
    bool field30;
    int32_t field60;
    int32_t field271;
    int32_t field272;
    int32_t field150;
    int32_t field23;
    bool field24;
    int32_t field25;
    struct benchmarks_proto3_google_message1_sub_message_t field15;
    bool field78;
    int32_t field67;
    int32_t field68;
    int32_t field128;
    char *field129_p;
    int32_t field131;
};

struct benchmarks_proto3_google_message1_sub_message_t *
benchmarks_proto3_google_message1_sub_message_new(
    void *workspace_p,
    size_t size);

int benchmarks_proto3_google_message1_sub_message_encode(
    struct benchmarks_proto3_google_message1_sub_message_t *self_p,
    uint8_t *encoded_p,
    size_t size);

int benchmarks_proto3_google_message1_sub_message_decode(
    struct benchmarks_proto3_google_message1_sub_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size);

int benchmarks_proto3_google_message1_field5_alloc(
    struct benchmarks_proto3_google_message1_t *self_p,
    int length);

struct benchmarks_proto3_google_message1_t *
benchmarks_proto3_google_message1_new(
    void *workspace_p,
    size_t size);

int benchmarks_proto3_google_message1_encode(
    struct benchmarks_proto3_google_message1_t *self_p,
    uint8_t *encoded_p,
    size_t size);

int benchmarks_proto3_google_message1_decode(
    struct benchmarks_proto3_google_message1_t *self_p,
    const uint8_t *encoded_p,
    size_t size);

#endif
