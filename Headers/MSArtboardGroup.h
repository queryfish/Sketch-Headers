//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSArtboardGroup.h"

#import "MSArtboardGroup.h"
#import "MSCloudExportable.h"
#import "MSLayerWithBackgroundColor.h"
#import "MSRootLayer.h"

@class MSLayoutGrid, MSRulerData, MSSimpleGrid, NSObject<NSCopying><NSCoding>, NSString;

@interface MSArtboardGroup : _MSArtboardGroup <MSCloudExportable, MSArtboardGroup, MSRootLayer, MSLayerWithBackgroundColor>
{
    id <MSSliceLayerWatcher> _sliceWatcher;
}

+ (unsigned long long)traits;
@property(nonatomic) __weak id <MSSliceLayerWatcher> sliceWatcher; // @synthesize sliceWatcher=_sliceWatcher;
- (void).cxx_destruct;
- (void)makeChildRectsIntegral;
- (id)immutableBackgroundColor;
- (id)closestClippingLayer;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (id)rootForNameUniquing;
- (void)moveChildrenToIdenticalPositionAfterResizeFromRect:(struct CGRect)arg1;
- (void)layerDidResizeFromRect:(struct CGRect)arg1 corner:(long long)arg2;
- (BOOL)isExpanded;
- (BOOL)canRotate;
- (id)otherArtboardUnderArtboard;
- (void)moveBySuggestedOffset:(struct CGSize)arg1;
- (void)setRect:(struct CGRect)arg1;
- (BOOL)shouldAutoresizeChildrenAfterResize;
- (BOOL)resizeToFitChildrenWithOption:(long long)arg1;
- (id)parentRoot;
- (id)parentArtboard;
- (void)refreshOverlayWithAbsoluteMargins:(struct CGSize)arg1;
@property(nonatomic) struct CGPoint rulerBase;
- (BOOL)isLocked;
- (void)setIsLocked:(BOOL)arg1;
@property(readonly, nonatomic) double rotation;
- (BOOL)isOpen;
- (BOOL)canBeTransformed;
- (BOOL)canBeContainedByGroup;
- (BOOL)isAutomaticScalingEnabled;
- (BOOL)hasClickThrough;
- (BOOL)hitTestInNameLabel:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (void)setIsVisible:(BOOL)arg1;
- (id)selectionHitTest:(struct CGPoint)arg1 options:(unsigned long long)arg2 zoomValue:(double)arg3 resultIndex:(unsigned long long *)arg4;
- (BOOL)isSelectableOnCanvasWithOptions:(unsigned long long)arg1;
- (id)defaultArtboardStyle;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
- (void)performInitEmptyObject;
- (BOOL)canBeHidden;
- (long long)includeForCloudExportState;
- (void)setIsMarkedForCloudExport:(BOOL)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfChildren;
- (BOOL)hasChildren;
- (BOOL)hasSliceIcon;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (id)contextualMenuPreviewImage;
- (id)unselectedPreviewImage;
- (id)selectedPreviewImage;
- (unsigned long long)displayType;
- (struct CGRect)optimalBoundingBox;
- (id)parentForInsertingLayers;
- (id)displayName;
- (id)parentRootForAbsoluteRect;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) MSSimpleGrid *grid;
@property(nonatomic) BOOL hasBackgroundColor;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) MSRulerData *horizontalRulerData;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(copy, nonatomic) MSLayoutGrid *layout;
@property(readonly, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly) Class superclass;
@property(copy, nonatomic) MSRulerData *verticalRulerData;

@end

