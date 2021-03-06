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



#ifndef MSONENOTEAPINOTESFETCHER_H
#define MSONENOTEAPINOTESFETCHER_H

#import "MSOneNoteApiModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSOneNoteApiNotebookCollectionFetcher;
@class MSOneNoteApiSectionCollectionFetcher;
@class MSOneNoteApiSectionGroupCollectionFetcher;
@class MSOneNoteApiPageCollectionFetcher;
@class MSOneNoteApiResourceCollectionFetcher;
@class MSOneNoteApiOperationCollectionFetcher;
@class MSOneNoteApiNotebookCollectionFetcher;
@class MSOneNoteApiSectionCollectionFetcher;
@class MSOneNoteApiSectionGroupCollectionFetcher;
@class MSOneNoteApiPageCollectionFetcher;
@class MSOneNoteApiResourceCollectionFetcher;
@class MSOneNoteApiOperationCollectionFetcher;
@class MSOneNoteApiNotebookFetcher;
@class MSOneNoteApiSectionFetcher;
@class MSOneNoteApiSectionGroupFetcher;
@class MSOneNoteApiPageFetcher;
@class MSOneNoteApiResourceFetcher;
@class MSOneNoteApiOperationFetcher;
@class MSOneNoteApiNotesOperations;


/** MSOneNoteApiNotesFetcher
 *
 */
@interface MSOneNoteApiNotesFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSOneNoteApiNotesOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSOneNoteApiNotes *, MSOrcError *))callback;
- (void)update:(MSOneNoteApiNotes *)Notes callback:(void (^)(MSOneNoteApiNotes *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSOneNoteApiNotesFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOneNoteApiNotesFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSOneNoteApiNotesFetcher *)select:(NSString *)params;
- (MSOneNoteApiNotesFetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=notebooks) MSOneNoteApiNotebookCollectionFetcher *notebooks;

- (MSOneNoteApiNotebookFetcher *)notebooksById:(id)identifier;

@property (strong, nonatomic, readonly, getter=sections) MSOneNoteApiSectionCollectionFetcher *sections;

- (MSOneNoteApiSectionFetcher *)sectionsById:(id)identifier;

@property (strong, nonatomic, readonly, getter=sectionGroups) MSOneNoteApiSectionGroupCollectionFetcher *sectionGroups;

- (MSOneNoteApiSectionGroupFetcher *)sectionGroupsById:(id)identifier;

@property (strong, nonatomic, readonly, getter=pages) MSOneNoteApiPageCollectionFetcher *pages;

- (MSOneNoteApiPageFetcher *)pagesById:(id)identifier;

@property (strong, nonatomic, readonly, getter=resources) MSOneNoteApiResourceCollectionFetcher *resources;

- (MSOneNoteApiResourceFetcher *)resourcesById:(id)identifier;

@property (strong, nonatomic, readonly, getter=_operations) MSOneNoteApiOperationCollectionFetcher *_operations;

- (MSOneNoteApiOperationFetcher *)_operationsById:(id)identifier;


@end

#endif
