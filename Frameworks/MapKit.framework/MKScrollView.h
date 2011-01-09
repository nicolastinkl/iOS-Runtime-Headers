/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKUserLocationView, CALayer, NSArray;



@interface MKScrollView : UIScrollView 
{
    id _mk_delegate;
    NSUInteger _gestureCount;
    double _lastGestureEndedInterval;
    BOOL _adjustContentOffsetDisabled;
    BOOL _enableBoundsHitDetection;
    BOOL _displayingHitDetectionLayer;
    NSArray *_boundsHitDetectionLayers;
    MKUserLocationView *_userLocationView;
    CALayer *_boundedLayer;
    struct $_712 { 
        unsigned int shouldHandleTouchesMoved : 1; 
        unsigned int scrollViewShouldHandlePinch : 1; 
        unsigned int scrollViewWillHandlePinch : 1; 
        unsigned int layoutScrollViewSubviews : 1; 
        unsigned int touchesBegan : 1; 
        unsigned int touchesCancelled : 1; 
        unsigned int touchesEnded : 1; 
    } _delegateImplements;
}

@property(retain) MKUserLocationView *userLocationView;
@property(readonly) double lastGestureEndedInterval;
@property(readonly) NSUInteger gestureCount;
@property BOOL enableBoundsHitDetection;

+ (void)_initializeSafeCategory;

- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1 adjustOffset:(BOOL)arg2;
- (void)setEnableBoundsHitDetection:(BOOL)arg1;
- (void)hideBoundsHitDetectionLayers;
- (void)_updateBoundsHitDetection;
- (id)boundsHitDetectionLayers;
- (void)userLocationWillUpdate:(id)arg1;
- (double)lastGestureEndedInterval;
- (NSUInteger)gestureCount;
- (BOOL)enableBoundsHitDetection;
- (void)setUserLocationView:(id)arg1;
- (void)userLocationAccuracyDidUpdate:(id)arg1;
- (id)userLocationView;
- (void)_cancelScrollingNotify:(BOOL)arg1;
- (void)_setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)handlePinch:(id)arg1;
- (id)_hitTestForContentView:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (float)_accessibilityScrollWidthDistance;
- (BOOL)_accessibilityShouldAnimateScroll;
- (float)_accessibilityScrollHeightDistance;
- (void)_accessibilityHandleScrollUpdate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (BOOL)_accessibilityUsesScrollParentForOrdering;
- (id)_accessibilityScrollStatus;
- (void)_accessibilityScrollToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forView:(id)arg2;
- (void)accessibilityScrollDownPage;
- (void)accessibilityScrollUpPage;
- (void)accessibilityScrollRightPage;
- (void)accessibilityScrollLeftPage;

@end