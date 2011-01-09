/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSOperation : NSObject 
{
    id _private;
    void *_reserved;
}

@property NSUInteger tag;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;

- (void)setObservationInfo:(void*)arg1;
- (void*)observationInfo;
- (id)_implicitObservationInfo;
- (BOOL)isReady;
- (BOOL)isFinished;
- (BOOL)isConcurrent;
- (BOOL)isAsynchronous;
- (NSInteger)queuePriority;
- (void)setQueuePriority:(NSInteger)arg1;
- (id)completionBlock;
- (void)waitUntilFinishedOrTimeout:(double)arg1;
- (void)addDependency:(id)arg1;
- (void)removeDependency:(id)arg1;
- (id)dependencies;
- (void)waitUntilFinished;
- (void)main;
- (void)finalize;
- (void)start;
- (void)cancel;
- (NSUInteger)retainCount;
- (id)init;
- (void)release;
- (id)retain;
- (void)dealloc;
- (void)setCompletionBlock:(id)arg1;
- (BOOL)isExecuting;
- (BOOL)isCancelled;
- (double)threadPriority;
- (void)setThreadPriority:(double)arg1;
- (NSUInteger)tag;
- (void)setTag:(NSUInteger)arg1;
- (void)NSOperationAdditions_dealloc;

@end