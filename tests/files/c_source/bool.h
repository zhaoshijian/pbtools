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

#ifndef BOOL_H
#define BOOL_H

#include "pbtools.h"

/**
 * Message bool.Message.
 */
struct bool_message_repeated_t {
    int length;
    struct bool_message_t **items_pp;
    struct bool_message_t *head_p;
    struct bool_message_t *tail_p;
};

struct bool_message_t {
    struct pbtools_message_base_t base;
    bool value;
};

struct bool_message_t *
bool_message_new(
    void *workspace_p,
    size_t size);

int bool_message_encode(
    struct bool_message_t *self_p,
    uint8_t *encoded_p,
    size_t size);

int bool_message_decode(
    struct bool_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size);

#endif
