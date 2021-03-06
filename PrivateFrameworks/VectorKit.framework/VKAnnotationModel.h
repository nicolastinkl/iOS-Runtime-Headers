/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <VKAnnotationModelDelegate>, NSArray, NSMutableArray, NSMutableSet, UIView, VKAnnotationMarker, VKCalloutController;

@interface VKAnnotationModel : VKModelObject <VKMapLayer> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct { 
        int from; 
        int to; 
        float fraction; 
    NSMutableSet *_animatingMarkers;
    id _annotationMarkerDeselectionCallback;
    NSMutableArray *_annotationMarkers;
    VKCalloutController *_calloutController;
    } _delayedShowCalloutAvoidRect;
    <VKAnnotationModelDelegate> *_delegate;
    BOOL _didDragMarker;
    VKAnnotationMarker *_draggingAnnotationMarker;
    BOOL _hasEverDrawnSomething;
    NSMutableArray *_markersToAnimate;
    VKAnnotationMarker *_selectedAnnotationMarker;
    BOOL _shouldAnimateCallout;
    } _styleTransitionState;
}

@property(copy) id annotationMarkerDeselectionCallback;
@property(readonly) NSArray * annotationMarkers;
@property(readonly) UIView * calloutContainerView;
@property(retain) VKCalloutController * calloutController;
@property <VKAnnotationModelDelegate> * delegate;
@property(readonly) BOOL needsLayout;
@property(readonly) VKAnnotationMarker * selectedAnnotationMarker;
@property struct { int x1; int x2; float x3; } styleTransitionState;

- (void)_showCalloutWithAnimation:(BOOL)arg1 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)anchorPositionChangedForMarker:(id)arg1;
- (id)annotationCoordinateTest;
- (id)annotationMarkerDeselectionCallback;
- (id)annotationMarkerForSelectionAtPoint:(struct { double x1; double x2; double x3; })arg1 avoidCurrent:(BOOL)arg2 canvasSize:(struct CGSize { float x1; float x2; })arg3;
- (id)annotationMarkers;
- (id)annotationRectTest;
- (id)calloutContainerView;
- (id)calloutController;
- (void)dealloc;
- (id)delegate;
- (void)deselectAnnotationMarker:(id)arg1 animated:(BOOL)arg2;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (unsigned int)mapLayerPosition;
- (BOOL)needsLayout;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeAnnotationMarker:(id)arg1;
- (void)selectAnnotationMarker:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)selectedAnnotationMarker;
- (void)setAnnotationMarkerDeselectionCallback:(id)arg1;
- (void)setCalloutController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStyleTransitionState:(struct { int x1; int x2; float x3; })arg1;
- (struct { int x1; int x2; float x3; })styleTransitionState;

@end
