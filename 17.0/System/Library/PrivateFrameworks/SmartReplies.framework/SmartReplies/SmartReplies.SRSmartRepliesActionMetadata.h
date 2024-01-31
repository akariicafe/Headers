@class NSString, NSURL, NSDate;

@interface SmartReplies.SRSmartRepliesActionMetadata : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ attribution;
    void /* unknown type, empty encoding */ stringRepresentation;
    void /* unknown type, empty encoding */ date;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ imageName;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *attribution;
@property (nonatomic, readonly) NSString *stringRepresentation;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ hasRichActionType;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ locationLatitude;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ locationLongitude;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ attributionSource;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithType:(long long)a0 title:(id)a1 attribution:(id)a2 stringRepresentation:(id)a3 date:(id)a4 hasRichActionType:(BOOL)a5 url:(id)a6 locationLatitude:(double)a7 locationLongitude:(double)a8 imageName:(id)a9 attributionSource:(long long)a10;

@end
