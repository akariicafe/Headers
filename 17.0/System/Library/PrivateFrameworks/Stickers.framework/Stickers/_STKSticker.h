@class NSUUID, NSArray, NSString, NSData;

@interface _STKSticker : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ representations;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ externalURI;
    void /* unknown type, empty encoding */ accessibilityName;
    void /* unknown type, empty encoding */ metadata;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSArray *representations;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ effectType;
@property (nonatomic, readonly) NSString *externalURI;
@property (nonatomic, readonly) NSString *accessibilityName;
@property (nonatomic, readonly) NSData *metadata;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ attributionInfo;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
