@class NSMapTable;

@interface PXRunNodeOperationMap : NSObject {
    NSMapTable *_operationMap;
}

- (id)init;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)operationForRunNode:(id)a0;

@end
