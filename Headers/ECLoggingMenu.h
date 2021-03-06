//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ECDebugMenu.h"

@class ECLogManager;

@interface ECLoggingMenu : ECDebugMenu
{
    ECLogManager *_logManager;
}

@property(nonatomic) __weak ECLogManager *logManager; // @synthesize logManager=_logManager;
- (void).cxx_destruct;
- (void)revealSettings;
- (void)revealLogFiles;
- (id)logFolder;
- (BOOL)validateMenuItem:(id)arg1;
- (void)channelsChanged:(id)arg1;
- (void)defaultHandlerSelected:(id)arg1;
- (void)resetSelected:(id)arg1;
- (void)handlerSelected:(id)arg1;
- (void)channelSelected:(id)arg1;
- (void)contextMenuSelected:(id)arg1;
- (void)channelMenuSelected:(id)arg1;
- (void)buildMenu;
- (id)buildDefaultHandlersMenu;
- (id)buildMenuForChannel:(id)arg1;
- (void)setup;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;
- (void)awakeFromNib;

@end

