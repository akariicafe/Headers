@interface _UIEventSessionHoverAction : _UIEventSessionAction

@property (nonatomic) long long tapDragState;
@property (nonatomic) long long numFingers;

- (long long)actionType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)mergeActionIfPossible:(id)a0;
- (id)typeEncoding;

@end
