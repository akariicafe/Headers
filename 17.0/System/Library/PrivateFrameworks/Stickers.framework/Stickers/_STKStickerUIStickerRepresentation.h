@class NSData, NSString;

@interface _STKStickerUIStickerRepresentation : NSObject {
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ role;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ size;
@property (nonatomic, readonly) NSString *role;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 type:(id)a1 size:(struct CGSize { double x0; double x1; })a2 role:(id)a3;

@end
