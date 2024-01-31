@class NSString;

@interface SEService.SEState : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ seType;
    void /* unknown type, empty encoding */ freeMemory;
    void /* unknown type, empty encoding */ infoDictionary;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
