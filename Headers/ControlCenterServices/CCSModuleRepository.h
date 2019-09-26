/*
 * This header is generated by classdump-dyld 1.0
 * on Wednesday, May 16, 2018 at 2:01:14 PM Central European Summer Time
 * Operating System: Version 11.1.2 (Build 15B202)
 * Image Source: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
 */

#import <ControlCenterServices/ControlCenterServices-Structs.h>
#import "LSApplicationWorkspaceObserverProtocol.h"
#import "CCSModuleMetadata.h"

@protocol BSDefaultObserver;

@interface CCSModuleRepository : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSArray* _directoryURLs;
	NSSet* _whitelistedModuleIdentifiers;
	NSDictionary* _allModuleMetadataByIdentifier;
	NSSet* _availableModuleIdentifiers;
	NSSet* _interestingBundleIdentifiers;
	MGNotificationTokenStructRef _mobileGestaltNotificationToken;
	NSHashTable* _observers;
	NSObject<BSDefaultObserver>* _internalDefaultsObserver;
	BOOL _ignoreWhitelist;
	NSSet* _loadableModuleIdentifiers;

}

@property (assign,nonatomic) BOOL ignoreWhitelist;					//@synthesize ignoreWhitelist=_ignoreWhitelist - In the implementation block
@property (nonatomic,copy,readonly) NSSet * loadableModuleIdentifiers;			//@synthesize loadableModuleIdentifiers=_loadableModuleIdentifiers - In the implementation block
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy,readonly) NSString * description;
@property (copy,readonly) NSString * debugDescription;
+ (id)_defaultModuleDirectories;
+ (id)_defaultModuleIdentifierWhitelist;
+ (id)_deviceFamily;
+ (id)repositoryWithDefaults;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_registerForVisiblityPreferenceChanges;
- (void)_unregisterForVisiblityPreferenceChanges;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (id)_initWithDirectoryURLs:(id)arg1 whitelistedModuleIdentifiers:(id)arg2;
- (void)_updateAllModuleMetadata;
- (void)setIgnoreWhitelist:(BOOL)arg1;
- (void)_registerForInternalPreferenceChanges;
- (void)_unregisterForInternalPreferenceChanges;
- (void)_stopObservingGestaltQuestions;
- (void)_applicationsDidChange:(id)arg1;
- (BOOL)_arrayContainsInterestingApplicationProxy:(id)arg1;
- (void)_updateAvailableModuleMetadata;
- (id)_loadAllModuleMetadata;
- (void)_updateAllModuleMetadataForAllModuleMetadata:(id)arg1;
- (void)_updateAvailableModuleMetadataForAllModuleMetadata:(id)arg1;
- (void)_updateLoadableModuleMetadataForAvailableModuleMetadata:(id)arg1;
- (void)_updateInterestingBundleIdentifiersForModuleMetadata:(id)arg1;
- (id)_filterModuleMetadataByAssociatedBundleAvailability:(id)arg1;
- (id)_filterModuleMetadataByVisibilityPreference:(id)arg1;
- (id)_moduleIdentifiersForMetadata:(id)arg1;
- (void)_updateGestaltQuestionsForModuleMetadata:(id)arg1;
- (id)_filterModuleMetadataByGestalt:(id)arg1;
- (id)_associatedBundleIdentifiersForModuleMetadata:(id)arg1;
- (id)_gestaltQuestionsForModuleMetadata:(id)arg1;
- (void)_updateLoadableModuleMetadata;
- (void)_startObservingMobileGestaltQuestions:(id)arg1 withChangeHandler:(/*^block*/ id)arg2;
- (BOOL)ignoreWhitelist;
- (NSSet *)loadableModuleIdentifiers;
- (CCSModuleMetadata*)moduleMetadataForModuleIdentifier:(id)arg1;
- (void)_runBlockOnObservers:(/*^block*/ id)arg1;
@end
