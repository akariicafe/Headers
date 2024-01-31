@class NSString, NSDictionary, NSDate;

@interface AASession : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ sessionData;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ kind;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDictionary *sessionData;

- (id)init;
- (void).cxx_destruct;

@end
