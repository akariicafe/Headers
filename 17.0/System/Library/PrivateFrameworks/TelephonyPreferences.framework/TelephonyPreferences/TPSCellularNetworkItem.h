@class NSString;

@interface TPSCellularNetworkItem : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *localizedName;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 localizedName:(id)a2;
- (BOOL)isEqualToCellularNetworkItem:(id)a0;

@end
