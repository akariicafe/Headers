@class NSString, NSNumber, GEOPDResultRefinementMetadata;

@interface GEOResultRefinementMultiSelectElement : NSObject

@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) GEOPDResultRefinementMetadata *metadata;
@property (readonly, nonatomic) NSString *refinementKey;
@property (readonly, nonatomic) unsigned long long elementType;
@property (readonly, nonatomic) int evChargingConnectorType;
@property (readonly, nonatomic) NSNumber *selectionSequenceNumber;

- (void).cxx_destruct;
- (id)convertToGEOPDResultRefinementMultiSelectElement;
- (id)initWithDisplayName:(id)a0 isSelected:(BOOL)a1 metadata:(id)a2 elementType:(unsigned long long)a3 evChargingConnectorType:(int)a4 selectionSequenceNumber:(id)a5;
- (id)initWithResultRefinementMultiSelectElement:(id)a0;

@end
