//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCloudViewController.h"

@class NSButton, NSTextField, NSURL;

@interface MSCloudInvalidLicenseViewController : MSCloudViewController
{
    NSTextField *_contentLabel;
    NSButton *_learnMoreButton;
    NSButton *_renewButton;
}

@property(retain, nonatomic) NSButton *renewButton; // @synthesize renewButton=_renewButton;
@property(retain, nonatomic) NSButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) NSTextField *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)presentCloudPopoverIfEligible;
- (void)refreshLicense;
- (void)openURL:(id)arg1;
- (void)showMoreInfo:(id)arg1;
- (void)renewLicense:(id)arg1;
- (void)receiptLicenseDidChangeStateNotification:(id)arg1;
@property(readonly, nonatomic) NSURL *infoURL;
@property(readonly, nonatomic) NSURL *renewalURL;
- (void)localize;
- (void)loadView;
- (void)viewDidLoad;

@end

