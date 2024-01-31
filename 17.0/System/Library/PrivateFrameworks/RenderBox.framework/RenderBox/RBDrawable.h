@class NSString, RBDevice, NSDictionary;
@protocol MTLTexture, RBDrawableDelegate, MTLEvent;

@interface RBDrawable : NSObject <_RBDrawableDelegate, RBDrawableStatistics> {
    struct refcounted_ptr<RB::Drawable> { struct Drawable *_p; } _drawable;
    struct spin_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _statistics_handler_lock;
    struct objc_ptr<void (^)(id<RBDrawableStatistics>)> { id /* block */ _p; } _statistics_handler;
    id<RBDrawableDelegate> _delegate;
    struct objc_ptr<RBDevice *> { RBDevice *_p; } _device;
    struct objc_ptr<id<MTLTexture>> { id<MTLTexture> _p; } _texture;
    struct objc_ptr<id<MTLEvent>> { id<MTLEvent> _p; } _event;
}

@property (readonly, nonatomic) RBDevice *device;
@property (weak, nonatomic) id<RBDrawableDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) int initialState;
@property (nonatomic) struct { float red; float green; float blue; float alpha; } clearColor;
@property (retain, nonatomic) id<MTLTexture> texture;
@property (retain, nonatomic) id<MTLEvent> event;
@property (nonatomic) unsigned long long eventValue;
@property (readonly, nonatomic) double GPUDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *statistics;
@property (copy, nonatomic) id /* block */ statisticsHandler;

- (void)resetStatistics:(unsigned long long)a0 alpha:(double)a1;
- (void)dealloc;
- (void)finish;
- (void)_RBDrawableStatisticsDidChange;
- (id).cxx_construct;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)dumpTexture:(id)a0 name:(id)a1;
- (void)renderDisplayList:(id)a0 flags:(unsigned int)a1;
- (void)renderDisplayList:(id)a0 sourceRect:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a1 destinationOffset:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 flags:(unsigned int)a3;
- (void)renderItems:(id)a0 flags:(unsigned int)a1;

@end
