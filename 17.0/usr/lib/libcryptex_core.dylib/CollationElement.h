@class NSString, NSDictionary, NSArray;

@interface CollationElement : NSObject

@property (readonly, nonatomic) long long cle_scope;
@property (readonly, retain, nonatomic) NSString *cle_bundle_id;
@property (readonly, retain, nonatomic) NSString *cle_bundle_version;
@property (readonly, retain) NSString *cle_mnt_path;
@property (readonly, copy) NSString *cle_command;
@property (readonly, retain) NSDictionary *cle_env;
@property (readonly, retain) NSArray *cle_command_args;

+ (id)scopeToString:(long long)a0;

- (id)package;
- (id)description;
- (void).cxx_destruct;
- (id)initWithXPC:(id)a0;
- (id)copyAbsolutePath:(id)a0;
- (id)initWithBundle:(id)a0 version:(id)a1 atPath:(id)a2 withScope:(long long)a3 withCommand:(id)a4 withCommandArgs:(id)a5 withEnv:(id)a6;

@end
