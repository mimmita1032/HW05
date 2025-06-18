

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class ASSIGNMENT05_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// ������
	AMyActor();

protected:
	// ���� ����, ���� �� �� ȣ��
	virtual void BeginPlay() override;

public:	
	// �� �����Ӹ��� ȣ��
	virtual void Tick(float DeltaTime) override;



private:
	// ���� ��ġ�� ������ 2D ���� (x, y)
	FVector2D start;

	// 0 �Ǵ� 1�� �������� ��ȯ (�̵� �Ÿ�)
	int32 step();

	// 10�� ���� �̵��ϸ� ��ġ ���
	void move();
};
