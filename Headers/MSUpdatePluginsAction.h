//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSDocumentAction.h"

#import "MSWindowBadgeAction.h"

@class NSAttributedString, NSColor, NSString;

@interface MSUpdatePluginsAction : MSDocumentAction <MSWindowBadgeAction>
{
}

@property(readonly, nonatomic) BOOL wantsBadge;
- (id)label;
@property(readonly, nonatomic) NSColor *badgeTint;
- (void)doPerformAction:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSAttributedString *badgeTitle; // @dynamic badgeTitle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

