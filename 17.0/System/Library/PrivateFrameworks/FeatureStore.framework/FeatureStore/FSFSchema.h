@class NSDictionary;

@interface FSFSchema : NSObject {
    NSDictionary *_schemaData;
}

@property (readonly, nonatomic) NSDictionary *schemaData;

- (void).cxx_destruct;
- (id)initSchemaForClass:(id)a0 inLanguage:(id)a1 withRepoUrl:(id)a2 pkgName:(id)a3 version:(id)a4;

@end
