/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Corporation. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/


#ifndef MSONENOTEAPIUSERCOLLECTIONFETCHER_H
#define MSONENOTEAPIUSERCOLLECTIONFETCHER_H

@class MSOneNoteApiUserFetcher;

#import "core/MSOrcCollectionFetcher.h"
#import "api/api.h"
#import "core/core.h"
#import "MSOneNoteApiModels.h"

/** MSOneNoteApiUserCollectionFetcher
 *
 */
@interface MSOneNoteApiUserCollectionFetcher : MSOrcCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (void)readWithCallback:(void (^)(NSArray *, MSOrcError *))callback;

- (MSOneNoteApiUserFetcher *)getById: (id) identifier;
- (void)add:(MSOneNoteApiUser *)entity callback:(void (^)(MSOneNoteApiUser *, MSOrcError *))callback;

- (MSOneNoteApiUserCollectionFetcher *)select:(NSString *)params;
- (MSOneNoteApiUserCollectionFetcher *)filter:(NSString *)params;
- (MSOneNoteApiUserCollectionFetcher *)search:(NSString *)params;
- (MSOneNoteApiUserCollectionFetcher *)top:(int)value;
- (MSOneNoteApiUserCollectionFetcher *)skip:(int)value;
- (MSOneNoteApiUserCollectionFetcher *)expand:(NSString *)value;
- (MSOneNoteApiUserCollectionFetcher *)orderBy:(NSString *)params;
- (MSOneNoteApiUserCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOneNoteApiUserCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@end

#endif
