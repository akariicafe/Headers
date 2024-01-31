@class NSArray, NSString;

@interface DKDiagnosticAllowList : NSObject

@property (retain, nonatomic) NSArray *allowList;
@property (readonly, nonatomic) NSString *contactMessage;

- (BOOL)containsIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifiers:(id)a0 contactMessage:(id)a1;

@end
