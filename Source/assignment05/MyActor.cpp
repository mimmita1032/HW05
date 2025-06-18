
#include "MyActor.h"

// ������
AMyActor::AMyActor()
{
 	// �� ���Ͱ� �� ������ Tick()�� ȣ���ϵ��� ����
	PrimaryActorTick.bCanEverTick = true;

	// ���� ��ġ�� (0, 0)���� �ʱ�ȭ
	start = FVector2D(0.0f, 0.0f);

}

// BeginPlay: ���� ���۽� ����
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	// ���Ͱ� �����ϸ� �̵� ����
	move();
	
}

// Tick: �� ������ ȣ��
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
// step(): 0 �Ǵ� 1�� �������� ��ȯ
int32 AMyActor::step()
{
    return FMath::RandRange(0, 1); // 0 �Ǵ� 1 ���� ��ȯ
}

// move(): 10�� �̵��ϸ� ��ǥ ���
void AMyActor::move()
{
    // �� 10ȸ �ݺ�
    for (int32 i = 0; i < 10; ++i)
    {
        // x, y�� ���� �̵� �Ÿ� ���� (0 �Ǵ� 1)
        int32 dx = step();
        int32 dy = step();

        // ��ǥ ������Ʈ
        start.X += dx;
        start.Y += dy;

        // ���� ��ǥ�� �α׷� ���
        UE_LOG(LogTemp, Warning, TEXT("Step %d - Current Position: (%.0f, %.0f)"), i + 1, start.X, start.Y);
    }
}
