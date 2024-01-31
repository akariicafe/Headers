@class NSString, NSError;

@interface PHLocalIdentifierMapping : NSObject

@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithLocalIdentifier:(id)a0 error:(id)a1;

@end
