//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BCWindowBadge, MSDocument, MSDocumentWindow, NSArray;

@interface MSBadgeController : NSObject
{
    MSDocument *_document;
    NSArray *_activeActions;
    BCWindowBadge *_badge;
}

@property(retain, nonatomic) BCWindowBadge *badge; // @synthesize badge=_badge;
@property(readonly, nonatomic) NSArray *activeActions; // @synthesize activeActions=_activeActions;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)refresh;
- (void)updateBadgeForAction:(id)arg1;
- (id)activeBadgingActionsForController:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *activeWindowBadgingActions;
@property(readonly, nonatomic) MSDocumentWindow *documentWindow;
- (id)initWithDocument:(id)arg1;

@end

