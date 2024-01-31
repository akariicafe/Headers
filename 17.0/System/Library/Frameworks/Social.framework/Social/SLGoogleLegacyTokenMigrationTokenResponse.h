@class NSString;

@interface SLGoogleLegacyTokenMigrationTokenResponse : SLGoogleLegacyTokenMigrationResponse

@property (readonly) NSString *token;
@property (readonly) NSString *errorMessage;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 urlResponse:(id)a1 error:(id)a2;

@end
