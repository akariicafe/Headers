@class NSString, NSSSizeVector;

@interface NSSUsageDataSizeCategory : NSObject

@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSString *categoryIdentifier;
@property (readonly, retain, nonatomic) NSSSizeVector *size;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 size:(id)a1 name:(id)a2;

@end
