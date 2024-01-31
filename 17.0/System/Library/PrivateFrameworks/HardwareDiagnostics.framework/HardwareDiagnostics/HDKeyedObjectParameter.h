@class NSString, NSMutableDictionary;

@interface HDKeyedObjectParameter : NSObject <HDParameterDescription>

@property (retain, nonatomic) NSString *summary;
@property (nonatomic) BOOL required;
@property (readonly, nonatomic) NSMutableDictionary *keys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addKeys:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)validateValue:(id)a0 error:(id *)a1;
- (void)addKey:(id)a0 forName:(id)a1;
- (id)initWithSummary:(id)a0 required:(BOOL)a1;

@end
