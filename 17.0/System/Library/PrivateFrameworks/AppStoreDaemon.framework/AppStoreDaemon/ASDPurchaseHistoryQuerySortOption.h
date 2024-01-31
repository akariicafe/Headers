@class NSString;

@interface ASDPurchaseHistoryQuerySortOption : NSObject <NSSecureCoding> {
    BOOL _ascending;
    NSString *_name;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) BOOL ascending;

- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 ascending:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
