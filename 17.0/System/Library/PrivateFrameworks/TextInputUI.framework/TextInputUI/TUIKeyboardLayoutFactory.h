@class NSMutableDictionary, TUIKBGraphSerialization;

@interface TUIKeyboardLayoutFactory : NSObject

@property (readonly, nonatomic) void *layoutsLibraryHandle;
@property (retain) NSMutableDictionary *internalCache;
@property (retain) TUIKBGraphSerialization *decoder;
@property (retain, nonatomic) NSMutableDictionary *overlayDecoders;

+ (id)sharedKeyboardFactory;
+ (id)crescendoLayouts;
+ (id)layoutsFileNameForDeviceClass;

- (id)init;
- (void)dealloc;
- (void)_createDecoderFromFilename:(id)a0;
- (id)keyboardSuffixForScreenDimensions:(struct CGSize { double x0; double x1; })a0;
- (id)keyboardWithName:(id)a0 inCache:(id)a1;
- (void)setData:(id)a0 forKeyboard:(id)a1;
- (id)keyboardPrefixForWidth:(double)a0 andEdge:(BOOL)a1;
- (void)_createDecoderIfNecessary;

@end
