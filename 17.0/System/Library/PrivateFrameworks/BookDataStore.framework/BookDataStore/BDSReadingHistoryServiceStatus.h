@class NSString;

@interface BDSReadingHistoryServiceStatus : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ value;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL isLoaded;
@property (nonatomic, readonly) NSString *description;

- (id)initWithIsLoaded:(BOOL)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
