@interface DEDialogStateUseCase : DEDialogState

- (double)lastTimestamp;
- (int)usageCount;
- (BOOL)hasAllRandomId:(id)a0;
- (id)groundingUsage:(id)a0;
- (id)allGroundings;
- (id)allRandomIds;
- (id)lastRandomIds;

@end
