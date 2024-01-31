@class NSString, NSDictionary, NSMutableDictionary;

@interface HDDescription : NSObject <NSCopying> {
    NSMutableDictionary *_parameters;
}

@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) NSDictionary *parameters;

+ (id)descriptionWithSummary:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSummary:(id)a0;
- (void)addParameter:(id)a0 forName:(id)a1;
- (BOOL)validateAgainstValues:(id)a0 error:(id *)a1;

@end
