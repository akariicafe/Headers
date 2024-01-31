@class NSString, NSMutableArray;

@interface _UITraitStorage : NSObject <NSCoding> {
    NSMutableArray *_records;
}

@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, weak, nonatomic) id object;

- (void)addRecord:(id)a0;
- (id)records;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_propertyDescriptionString;
- (void)applyRecordsMatchingTraitCollection:(id)a0;
- (id)initWithObject:(id)a0 keyPath:(id)a1;

@end
