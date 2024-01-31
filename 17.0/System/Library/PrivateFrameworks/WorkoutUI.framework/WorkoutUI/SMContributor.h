@class NSString;

@interface SMContributor : NSObject {
    void /* unknown type, empty encoding */ contributor;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;

- (id)init;
- (void).cxx_destruct;

@end
