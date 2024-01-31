@class NSNumber, NSArray, CHTextCorrectionResult;

@interface CHTextInputQueryItem : NSObject

@property (readonly, nonatomic) NSNumber *itemIdentifier;
@property (readonly, nonatomic) NSNumber *itemStableIdentifier;
@property (readonly, copy, nonatomic) NSArray *strokeIdentifiers;
@property (readonly, nonatomic) CHTextCorrectionResult *correctionResult;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToTextInputQueryItem:(id)a0;

@end
