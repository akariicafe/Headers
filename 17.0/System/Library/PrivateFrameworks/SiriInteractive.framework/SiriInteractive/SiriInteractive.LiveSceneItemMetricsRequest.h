@class NSString, _TtC15SiriInteractive20SizeDimensionRequest;

@interface SiriInteractive.LiveSceneItemMetricsRequest : NSObject <NSCopying, NSSecureCoding, BSXPCCoding> {
    void /* unknown type, empty encoding */ _widthRequest;
    void /* unknown type, empty encoding */ _heightRequest;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) _TtC15SiriInteractive20SizeDimensionRequest *widthRequest;
@property (nonatomic, retain) _TtC15SiriInteractive20SizeDimensionRequest *heightRequest;
@property (nonatomic) void /* unknown type, empty encoding */ cornerRadius;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } initialSize;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } maximumSize;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithWidth:(id)a0 height:(id)a1 cornerRadius:(double)a2;

@end
