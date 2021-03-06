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



#ifndef MSONENOTEAPISECTIONFETCHER_H
#define MSONENOTEAPISECTIONFETCHER_H

#import "MSOneNoteApiModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSOneNoteApiIdentitySetFetcher;
@class MSOneNoteApiNotebookFetcher;
@class MSOneNoteApiSectionGroupFetcher;
@class MSOneNoteApiPageCollectionFetcher;
@class MSOneNoteApiNotebookFetcher;
@class MSOneNoteApiSectionGroupFetcher;
@class MSOneNoteApiPageCollectionFetcher;
@class MSOneNoteApiPageFetcher;
@class MSOneNoteApiSectionOperations;


/** MSOneNoteApiSectionFetcher
 *
 */
@interface MSOneNoteApiSectionFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSOneNoteApiSectionOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSOneNoteApiSection *, MSOrcError *))callback;
- (void)update:(MSOneNoteApiSection *)Section callback:(void (^)(MSOneNoteApiSection *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSOneNoteApiSectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOneNoteApiSectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSOneNoteApiSectionFetcher *)select:(NSString *)params;
- (MSOneNoteApiSectionFetcher *)expand:(NSString *)value;

@property (strong, nonatomic, readonly, getter=parentNotebook) MSOneNoteApiNotebookFetcher *parentNotebook;

@property (strong, nonatomic, readonly, getter=parentSectionGroup) MSOneNoteApiSectionGroupFetcher *parentSectionGroup;
@property (strong, nonatomic, readonly, getter=pages) MSOneNoteApiPageCollectionFetcher *pages;

- (MSOneNoteApiPageFetcher *)pagesById:(id)identifier;


@end

#endif
