@interface SMBClientManager : LiveFSClient

+ (id)newManager;

- (id)listenerForVolume:(id)a0 error:(id *)a1;
- (id)volumes:(id *)a0;
- (void)forgetVolume:(id)a0 completionHandler:(id /* block */)a1;
- (void)addSMBServerOrShare:(id)a0 completionHandler:(id /* block */)a1;
- (id)addVolume:(id)a0 atServer:(id)a1 credentialType:(long long)a2 credential:(id)a3;
- (void)addVolumes:(id)a0 atServer:(id)a1 credentialType:(long long)a2 credential:(id)a3 completionHandler:(id /* block */)a4;
- (void)credentialTypesForServer:(id)a0 completionHandler:(id /* block */)a1;
- (id)forgetVolume:(id)a0;
- (void)forgetVolume:(id)a0 withFlags:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)listenerForVolume:(id)a0 completionHandler:(id /* block */)a1;
- (void)mountsFromServer:(id)a0 completionHandler:(id /* block */)a1;
- (void)sharesAtServer:(id)a0 credentialType:(long long)a1 credential:(id)a2 completionHandler:(id /* block */)a3;
- (id)sharesAtServer:(id)a0 credentialType:(long long)a1 credential:(id)a2 error:(id *)a3;
- (void)volumesWithCompletionHandler:(id /* block */)a0;

@end
