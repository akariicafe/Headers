@class NSString, NSDictionary, NSData, NSError;

@interface COIDSMessage : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSString *command;
@property (readonly, nonatomic) NSData *payload;
@property (readonly, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *metadata;

- (id)initWithError:(id)a0;
- (id)initWithResponse:(id)a0;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void)_commandPayload:(id)a0;
- (BOOL)checkValue:(id)a0 forKey:(id)a1 isKindOfClass:(Class)a2 error:(out id *)a3;
- (id)unarchivePayloadOfTypes:(id)a0 error:(id *)a1;
- (BOOL)validateCommand:(inout id *)a0 error:(out id *)a1;
- (BOOL)validateData:(inout id *)a0 error:(out id *)a1;
- (BOOL)validateError:(inout id *)a0 error:(out id *)a1;
- (BOOL)validateMetadata:(inout id *)a0 error:(out id *)a1;
- (BOOL)validateType:(inout id *)a0 error:(out id *)a1;
- (BOOL)validateVersion:(inout id *)a0 error:(out id *)a1;

@end
