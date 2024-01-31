@class NSArray, NSString;

@interface PRComplicationSuggestionSet : NSObject

@property (readonly, nonatomic) NSArray *descriptors;
@property (readonly, copy, nonatomic) NSString *localizedTitle;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDescriptors:(id)a0 localizedTitle:(id)a1;

@end
