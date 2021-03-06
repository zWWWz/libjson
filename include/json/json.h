/*
 * Copyright (c) 2009 Roy Wellington IV
 * 
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 * 
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */
/**
 * \file json.h
 */
#ifndef LIBJSON__JSON_H
#define LIBJSON__JSON_H

#include <iostream>
#include <string>

#include "json_value.h"
#include "json_array.h"
#include "json_object.h"
#include "json_primitives.h"
#include "json_exception.h"

/**
 * The namespace within which this library's functionality is contained.
 */
namespace json
{
	void generate(const json::Object &obj, std::ostream &out, bool pretty_print = false, const std::string &indent = "\t");
	void generate(const json::Array &obj, std::ostream &out, bool pretty_print = false, const std::string &indent = "\t");

	/**
	 * \brief Parse a JSON object or array from a stream.
	 * \param s The stream containing the JSON object or array.
	 * \return A pointer to the parsed object or array.
	 */
	json::Value *parse(std::istream &s);
	/**
	 * \brief Parse a JSON object or array from a string.
	 * \param s The string containing a JSON object.
	 * \return A pointer to the parsed object or array.
	 */
	json::Value *parse(const std::string &s);
}

#endif

