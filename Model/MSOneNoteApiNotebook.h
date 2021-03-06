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


#ifndef MSONENOTEAPINOTEBOOK_H
#define MSONENOTEAPINOTEBOOK_H

#import <Foundation/Foundation.h>
#import "core/MSOrcChangesTrackingArray.h"

@class MSOneNoteApiNotebookLinks;
@class MSOneNoteApiIdentitySet;
@class MSOneNoteApiSection;
@class MSOneNoteApiSectionGroup;
#import "MSOneNoteApiUserRole.h"
#import "core/MSOrcBaseEntity.h"
#import "api/MSOrcInteroperableWithDictionary.h"

/** Interface MSOneNoteApiNotebook
 *
 */
@interface MSOneNoteApiNotebook : MSOrcBaseEntity <MSOrcInteroperableWithDictionary>

/** Property isDefault
 *
 */
@property (nonatomic,  setter=setIsDefault:, getter=isDefault) bool isDefault;

/** Property userRole
 *
 */
@property (nonatomic,  setter=setUserRole:, getter=userRole) MSOneNoteApiUserRole userRole;

- (void)setUserRoleString:(NSString *)string;

/** Property isShared
 *
 */
@property (nonatomic,  setter=setIsShared:, getter=isShared) bool isShared;

/** Property sectionsUrl
 *
 */
@property (nonatomic,  copy, setter=setSectionsUrl:, getter=sectionsUrl) NSString * sectionsUrl;

/** Property sectionGroupsUrl
 *
 */
@property (nonatomic,  copy, setter=setSectionGroupsUrl:, getter=sectionGroupsUrl) NSString * sectionGroupsUrl;

/** Property links
 *
 */
@property (nonatomic,  copy, setter=setLinks:, getter=links) MSOneNoteApiNotebookLinks * links;

/** Property name
 *
 */
@property (nonatomic,  copy, setter=setName:, getter=name) NSString * name;

/** Property createdBy
 *
 */
@property (nonatomic,  copy, setter=setCreatedBy:, getter=createdBy) NSString * createdBy;

/** Property createdByUser
 *
 */
@property (nonatomic,  copy, setter=setCreatedByUser:, getter=createdByUser) MSOneNoteApiIdentitySet * createdByUser;

/** Property lastModifiedBy
 *
 */
@property (nonatomic,  copy, setter=setLastModifiedBy:, getter=lastModifiedBy) NSString * lastModifiedBy;

/** Property lastModifiedByUser
 *
 */
@property (nonatomic,  copy, setter=setLastModifiedByUser:, getter=lastModifiedByUser) MSOneNoteApiIdentitySet * lastModifiedByUser;

/** Property lastModifiedTime
 *
 */
@property (nonatomic,  copy, setter=setLastModifiedTime:, getter=lastModifiedTime) NSDate * lastModifiedTime;

/** Property _id
 *
 */
@property (nonatomic,  copy, setter=setId:, getter=_id) NSString * _id;

/** Property _self
 *
 */
@property (nonatomic,  copy, setter=setSelf:, getter=_self) NSString * _self;

/** Property createdTime
 *
 */
@property (nonatomic,  copy, setter=setCreatedTime:, getter=createdTime) NSDate * createdTime;

/** Property sections
 *
 */
@property (nonatomic,  copy, setter=setSections:, getter=sections) NSMutableArray * sections;

/** Property sectionGroups
 *
 */
@property (nonatomic,  copy, setter=setSectionGroups:, getter=sectionGroups) NSMutableArray * sectionGroups;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings;


@end

#endif
