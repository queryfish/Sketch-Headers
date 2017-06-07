//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSLayerPaster : NSObject
{
}

+ (void)updateOverridesForInstancesOnPasteboard:(id)arg1;
+ (BOOL)propertiesAreEqualBetweenSymbol:(id)arg1 andSymbol:(id)arg2;
+ (void)addSymbolMasterWithID:(id)arg1 inDocument:(id)arg2 fromPasteboardLayers:(id)arg3;
+ (void)addSymbolMastersInDocument:(id)arg1 fromPasteboardLayers:(id)arg2;
+ (void)ensureSymbolMastersHaveUniqueID:(id)arg1 inDocument:(id)arg2;
+ (void)addSharedObjectsInDocument:(id)arg1 fromPasteboardLayers:(id)arg2;
+ (id)rightmostArtboardOnPage:(id)arg1 intersectingRect:(struct CGRect)arg2;
+ (struct CGPoint)findFirstAvailablePositionForSize:(struct CGSize)arg1 nextToArtboardsOnPage:(id)arg2 inAllowedRect:(struct CGRect)arg3;
+ (BOOL)wouldArtboardWithRect:(struct CGRect)arg1 intersectOtherArtboardsOnPage:(id)arg2;
+ (id)layersFromLayersWithPathsWrapped:(id)arg1 forParent:(id)arg2;
+ (id)pathsExtractedFromLayers:(id)arg1;
+ (id)layersFromPasteboard:(id)arg1 suitedForParent:(id)arg2;
+ (void)setCombinedOrigin:(struct CGPoint)arg1 forLayers:(id)arg2;
+ (id)insertPasteboardData:(id)arg1 intoParent:(id)arg2 atPosition:(struct CGPoint)arg3 afterLayer:(id)arg4;
+ (struct CGRect)centerSize:(struct CGSize)arg1 inAllowedRect:(struct CGRect)arg2;
+ (struct CGRect)allowedRectForViewport:(id)arg1 root:(id)arg2;
+ (struct CGRect)rectByMaintainingOriginalPosition:(id)arg1 root:(id)arg2;
+ (struct CGRect)targetRectForPasteboardData:(id)arg1 inViewPort:(id)arg2 root:(id)arg3 canMoveViewport:(char *)arg4;
+ (id)parentForData:(id)arg1 hint:(id)arg2 page:(id)arg3;
+ (id)parentForData:(id)arg1 hint:(id)arg2 page:(id)arg3 viewPort:(id)arg4;
+ (id)insertPasteboardData:(id)arg1 onPage:(id)arg2 withHint:(id)arg3 viewPort:(id)arg4;

@end

